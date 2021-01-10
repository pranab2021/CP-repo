#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long first, second, large;
    for (int i = 0; i < n - 1; i++) {
        if (i == 0) {
            cin >> first >> second;
            large = (second > first) ? second : first;
            if (second < first) first = second;
        } else {
            cin >> second;  // new num
            if (second > large) {
                first = large;
                large = second;
            }
            else if(second > first){
                first = second;
            }
        }
    }
    cout << large * first;
}