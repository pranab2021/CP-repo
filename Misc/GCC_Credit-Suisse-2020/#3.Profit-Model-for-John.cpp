//Sample Tests passes. Judge Tests failed
#include <algorithm>
#include <iostream>
#include <vector>

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

struct triplet {
    int x, y, z;
};
int solve();
vector<int> v;
vector<triplet> ans;
int32_t main() {
    fast;
    int t = 1;
    for (int i = 1; i <= t; ++i) solve();
}
void check(vector<int>::iterator test, int searchNum) {
    auto it = find(test, v.end(), searchNum);
    if (it != v.end()) {
        ans.pb({it - test, test - v.begin() + 1, it - v.begin() + 1});
    }
}
bool comp(triplet i1, triplet i2) { return (i1.z < i2.z); }
bool comp2(triplet i1, triplet i2) { return (i1.x < i2.x); }
int solve() {
    int days, tests, share, desiredProfit;

    cin >> days >> tests;
    for (int i = 0; i < days; i++) {
        cin >> share;
        v.pb(share);
    }
    for (int i = 0; i < tests; i++) {
        cin >> desiredProfit;
        for (auto it = v.begin(); it != v.end(); it++) {
            check(it, *it + desiredProfit);
        }

        sort(ans.begin(), ans.end(), comp);
        triplet firstTri = *ans.begin();
        triplet lastTri = *(ans.end() - 1);

        while (lastTri.z != firstTri.z) {
            ans.pop_back();
            lastTri = *(ans.end() - 1);
        }
        sort(ans.begin(), ans.end(), comp2);
        firstTri = *ans.begin();
        cout << firstTri.y << " " << firstTri.z;
        if (i != tests - 1) {
            cout << ",";
        }
        ans.clear();
    }

    return 0;
}