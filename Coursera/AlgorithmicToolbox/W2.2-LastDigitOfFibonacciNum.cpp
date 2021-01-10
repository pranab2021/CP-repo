#include <bits/stdc++.h>
using namespace std;
int getFibonacciLastDigit(int n) {
    int first = 0, second = 1, res;

    for (int i = 2; i <= n; i++) {
        res = (first + second) % 10;//main catch is that '% 10'
        first = second;
        second = res;
    }

    return res;
}

int main() {
    int n;
    cin >> n;
    cout << getFibonacciLastDigit(n);
    return 0;
}
