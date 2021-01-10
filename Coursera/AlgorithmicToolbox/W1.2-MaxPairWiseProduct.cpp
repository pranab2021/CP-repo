#include <bits/stdc++.h>

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

long long solve(const vector<int>& numbers) {
    long long result = 0;
    int n = numbers.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (((long long)numbers[i]) * numbers[j] > result) {
                result = ((long long)numbers[i]) * numbers[j];
            }
        }
    }

    return result;
}
long long solveFast(const vector<int>& numbers) {
    int n = numbers.size();
    int max_index1 = -1;
    for (int i = 0; i < n; i++)
        if ((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
            max_index1 = i;

    int max_index2 = -1;
    for (int j = 0; j < n; j++)
        if ((numbers[j] != numbers[max_index1]) &&
            ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
            max_index2 = j;

    return ((long long)numbers[max_index1]) * numbers[max_index2];
}

long long solveFast2(const vector<int>& numbers) {
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
int32_t main() {
    fast;

    int t = 1;
    // cin >> t;

    //stress-testig code
    while (true) {
        int n = rand() % 1000 + 2;
        cout << n << endl;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            a.pb(rand() % 100000);
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }
        cout << endl;
        auto res1 = solve(a);
        // auto res2 = solveFast(a);
        auto res2 = solveFast2(a);
        if(res1!=res2){
            cout << "Wrong answer: " << res1 << " " << res2 << endl;
            break;
        }
        else{
            cout << "OK\n";
        }
    }

    for (int i = 1; i <= t; ++i) {
        int n;
        cin >> n;
        vector<int> numbers(n);
        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
        }
        auto result = solve(numbers);
        cout << result << endl;
    }
    return 0;
}
