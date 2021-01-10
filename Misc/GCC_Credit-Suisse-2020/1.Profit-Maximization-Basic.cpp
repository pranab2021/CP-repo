#include <iostream>
#include <set>

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
    for (int i = 1; i <= t; ++i) solve();
}
int solve() {
    int n, p, low, high;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> p;
        if (i == 0) {
            low = p;
            high = p;
        } else if (p < low) {
            s.insert(high - low);
            low = p;
            high = p;
        } else if (p > high) {
            high = p;
        }
    }
    s.insert(high - low);

    set<int>::iterator it = --s.end();
    cout << *it;
    return 0;
}
// 8 2 5 1 6 2 3 1 4
// 8 100 10 12 5 6 14 5 6   