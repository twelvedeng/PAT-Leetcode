#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int ans[100001];
int main() {
	int size, max = 0;
	cin >> size;
	vector<int> a(size), b(size);
	for (int i = 0; i < size; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a.begin(), a.end());
	int cnt = 0;
	for (int i = 0; i < size; i++) {
		if(a[i] == b[i] && b[i] > max) 
			ans[cnt++] = b[i];
		if(b[i] > max) max = b[i];
	}
	cout << cnt << endl; 
	for (int i = 0; i < cnt; i++) {
		if(i != 0) cout << " ";
		cout << ans[i];
	}
	cout << endl;
	return 0;
} 
