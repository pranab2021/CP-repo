#include <iostream>

using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define vi vector<int>
#define itall(it, x) for (auto it = x.begin(); it != x.end(); it++)

int solve();
int32_t main() {
    fast;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; ++i) solve();
}
int solve() {
    int d;
    cin >> d;
    int p, low, sum = 0;
    for (int i = 0; i < d; i++) {
        cin >> p;
        if (i == 0) {
            low = p;
        } else if (p < low) {
            low = p;
        } else if (p > low) {
            sum = sum + (p - low);
            low = p;
        }
        
    }
    cout << sum;
    return 0;
}
//14 5 1 6 3 2 5 6 1 3 6 2 5 5 10