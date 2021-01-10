#include<iostream>
#include<vector>
using namespace std;

void merge(vector <int> arr, int l,  int mid,  int r)
{
	//int n1 = mid - l + 1, n2 = r - mid;
	//int* N1= &n1, *N2= &n2;
	vector <int> a, b;

	for (int i=l; i<=mid; i++)
	{
		a.push_back(arr[i]);
	}

	for (int i = mid+1; i <= r; i++)
	{
		b.push_back(arr[i]);
	}
	int i = 0, j = 0;
	while (i <= a.size() && j <= b.size())
	{
		if (a[i] > b[j])
			a[i++] = arr[l++];
		else
			b[j++] = arr[l++];
	}

	for (i <= a.size(); i++;)
		a[i] = arr[l++];

	for (j <= b.size(); j++;)
		b[j] = arr[l++];
}

void mergesort(vector <int> arr, int l, int r)
{
	if (r > l)
	{
		int mid = (r + l) / 2;
		mergesort(arr, l, mid);
		mergesort(arr, mid + 1, r);
		merge(arr, l, mid, r);
	}
}


int main()
{
	int size;
	cin >> size;
	vector <int> ar;

	for (int i = 0; i <size; i++)
		cin >> ar[i];



	mergesort(ar, 0, ar.size());

	for (int i = 0; i <size; i++)
		cout << ar[i];

	return 0;
}
