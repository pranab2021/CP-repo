//https://codeforces.com/contest/1300/problem/A

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
    short int n, in;
    vi v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> in;
        v.pb(in);
    }

    sort(all(v));

    auto it1 = lower_bound(all(v), -1);
    auto it11 = upper_bound(all(v), -1);
    int i1 = it11 - it1;

    auto it0 = lower_bound(all(v), 0);
    auto it00 = upper_bound(all(v), 0);
    
    int i0= (it00 - it0);
    for (int j = 0; j < i0; j++) {
        v.pb(1);
    }

    int sum = 0;
    for (auto i : v) {
        sum = sum + i;
    }

    if (sum == 0) {
        if (i1 < v.size()) {
            i0++;
        }
    }
    cout << i0 << endl;
}