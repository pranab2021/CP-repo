//https://codeforces.com/contest/1300/problem/B

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define fi                      first
#define se                      second
#define pb                      push_back
#define endl                    '\n'
#define all(x)                  x.begin(),x.end()
#define pii                     pair<int,int>
#define fast                    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vi                      vector<int>
#define itall(it,x)             for( auto it=x.begin(); it!=x.end(); it++)

void solve();

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
        solve();

}

void solve() {
    int n, in;
    vi v;
    cin >> n;
    for (int i = 0; i < 2*n; i++) {
        cin >> in;
        v.pb(in);
    }

    sort(all(v));

    int ans = v[n] - v[n-1];

    cout << ans << endl;
}