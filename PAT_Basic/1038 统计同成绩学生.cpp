#include <iostream>
#include <vector>
using namespace std;
//int a[101] = {0};
int main() {
	int n, grade, m, search;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> grade;
		a[grade]++;
	}
	cin >> m;
	int flag = 0;
	for (int i = 0; i < m; i++) {
		cin >> search;
		if (flag) cout << " ";
		cout << a[search];
		flag = 1;
	}
	return 0;
}
