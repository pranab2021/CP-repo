// CPP program to create a 2D vector to create NxN vector matrix
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    int n;
	cin>>n;

	// Create a vector of vector with size 
	// equal to row. 
	vector<vector<int>> vec(n); 

	for (int i = 0; i < n; i++) { 

		// declare the i-th row to size of column 
		vec[i] = vector<int>(n); 
		for (int j = 0; j < n; j++) 
			cin>>vec[i][j]; 
	} 

	for (int i = 0; i < n; i++) { 
		for (int j = 0; j < vec[i].size(); j++) 
			cout << vec[i][j] << " "; 
		cout << endl; 
	} 
} 