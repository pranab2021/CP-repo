#include <bitset>
#include<iostream>
using namespace std;


int main() {
    string s = bitset< 32 >(54321).to_string();// string conversion

    cout << s << endl;
    cout << bitset< 32 >(54321) << ' '; // direct output

    bitset< 64 > input;
    cin >> input;
    unsigned long ul = input.to_ulong();

    cout << ul;
}