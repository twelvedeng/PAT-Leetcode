#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a, int b) {
	return a < b;
}
int main() {
	int n, len, ans = 0;
	cin >> n;
	vector<int> l(n);
	for(int i = 0; i < n; i++)
		cin >> l[i];
	getchar();
	sort(l.begin(), l.end(), cmp);
	ans = l[0]/2 + l[1]/2;
	for(int i = 2; i < n; i++) {
		ans = (ans + l[i])/2;
	}
	cout << ans;
	return 0;
}
