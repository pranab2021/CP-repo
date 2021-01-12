// https://www.codechef.com/problems/WDTBAM
#include <iostream>

using namespace std;

int main() {
    int t, n, count = 0;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        char a[n];
        for (int x = 0; x < n; x++) {
            cin >> a[x];
        };
        char b[n];
        for (int y = 0; y < n; y++) {
            cin >> b[y];
        };
        for (int i = 0; i < n; i++)
            if (a[i] == b[i]) count++;
        int bounty[n + 1];
        for (int p = 0; p < n + 1; p++) {
            cin >> bounty[p];
        };
        cout<<bounty[count]<<endl;
        count=0;
    };
    return 0;
}
