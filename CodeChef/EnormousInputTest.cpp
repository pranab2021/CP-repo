// https://www.codechef.com/problems/INTEST

#include<iostream>

using namespace std;

int main(){
    int n, divisor, output=0;
    int input;
    cin>>n>>divisor;

    for(int i=0; i<n; i++){
        cin >> input;

        if(input%divisor==0){
            output++;
        }

    }

    cout<<output;

    return 0;
}
