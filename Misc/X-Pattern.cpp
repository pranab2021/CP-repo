#include<iostream>
using namespace std;

void iterate(int& i, int& n);

int main() {
    int n=0;
    cout << "X mark width: ";   
    cin >> n;
    cout << endl;
    
    int N = (((n & 1) == 0) ? n / 2 - 1 : n / 2 );
    for (int i = 0; i <= N; i++) {
        iterate(i, n);
    }

    int i = (((n & 1) == 0) ? n / 2 - 2 : n / 2 - 1);
    for (; i >= 0; i--) {
        iterate(i, n);
    }
    return 0;
}

void iterate(int &i, int &n) {
    for (int j = 0; j < n; j++) {
        if ((i & 1) == 0) {//even
            (j == i || j == 1 + i || j == n - i - 1 || j == n - i - 2) ? cout << "*" : cout << " ";
        }
        else {
            (j == i || j == n - i - 1) ? cout << "*" : cout << " ";
        }

    }
    cout << endl;
}




