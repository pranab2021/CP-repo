// C++ STL stream iterator
#include <vector> 
#include <string>  
#include <sstream> 
#include <iterator> 
#include <iostream> 
#include <algorithm>

using namespace std;

int main(void) {
    // vector container
    vector<string> strvec;

    // container iterator
    vector<string>::iterator Iter;

    // read from the standard input until EOF/error
    // the EOF is platform dependent...
    // then copy (inserting) to strvec vector...
    // copy from begin to end of source, to destination
    cout << "Enter some string (EOF) to terminate: " << endl;
    copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(strvec));
    // print the result
    cout << "\nstrvec vector data: ";
    for (Iter = strvec.begin(); Iter != strvec.end(); Iter++)
        cout << *Iter << " ";

    cout << endl;

    // do some sorting
    sort(strvec.begin(), strvec.end());

    // print the result
    cout << "\nstrvec sorted vector data: ";

    for (Iter = strvec.begin(); Iter != strvec.end(); Iter++)
        cout << *Iter << " ";

    cout << endl << endl;

    // ostream iteration - method 1
    cout << "\nprint again:\n";
    ostringstream vts; //example of ostringstream is std::cout

    // Convert all but the last element to avoid a trailing ","
    copy(strvec.begin(), strvec.end() - 1, ostream_iterator<string>(vts, ", "));
    // Now add the last element with no delimiter
    vts << strvec.back();
    //PRINT
    cout << vts.str() << endl;

    // ostream iteration - method 2
    // print all elements to standard output
    copy(strvec.begin(), strvec.end() - 1, ostream_iterator<string>(cout, ", "));
    ostringstream s;
    s << strvec.back();
    //PRINT
    cout << s.str();
    return 0;
}