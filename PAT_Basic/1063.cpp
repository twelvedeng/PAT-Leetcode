#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	int n, s, x;
	double r;
	vector<double> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &s, &x);
		r = sqrt(pow(s, 2) + pow(x, 2));
		v.push_back(r);
	}
	sort(v.begin(), v.end());
	printf("%.2f\n", v[v.size()-1]);
	return 0;
}
		
