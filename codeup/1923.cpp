#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, x;
	scanf("%d", &n);
	while(scanf("%d", &x) != EOF) {
		vector<int> v;
		v.push_back(x);
		for (int i = 0 ; i < n-1; i++) {
			scanf("%d", &x);
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		int i;
		for (i = 0; i < v.size()-1; i++)
			printf("%d ", v.at(i));
		printf("%d\n", v.at(i));
	}
	return 0;
}
