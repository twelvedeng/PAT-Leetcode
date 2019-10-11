#include <bits/stdc++.h>
using namespace std;
int arr[102];
int ans[102];
int main () {
	int n;
	 cin >> n;
	for(int i = 0; i < n; i++)
	 	cin >> arr[i];
	for(int j = 0; j < n; j++)
		cin >> ans[i];
	int i, j;
	for (i=1; i < n && ans[i]>ans[i-1]; i++)
	for (j = i+1; arr[j] == ans[j]; j++)
	if(j == n) cout << "Insert Sort\n";
	else	cout << "Merge Sort\n";
	
}