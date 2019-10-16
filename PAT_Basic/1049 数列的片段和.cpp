#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	double x;
	double ans = 0.0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		ans += double(i+1) * double(n-i) * x;
	} 
	printf("%.02f\n", ans);
	return 0;
}
