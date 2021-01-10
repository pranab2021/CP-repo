#include <iostream>
using namespace std;

int main() {
    int i = 4;

    int* p = &i;
    int& ref = i;  // both p & ref store address of i

    cout << i << endl;
    cout << *p << endl;
    cout << ref << endl;  // all give 4

    cout << &ref << endl;
    cout << p << endl;  // both same address of i
}
