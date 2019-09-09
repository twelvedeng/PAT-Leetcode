#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	int n, mile;
	scanf("%d", &n);
	vector<int> v;
	for (int i = 0; i < n; i++) {
		scanf("%d", &mile);
		v.push_back(mile);
	}
	vector<int> ans;
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) 
		if(v[i] <= v.size()-i-1)
			ans.push_back(v[i]);
	sort(ans.begin(), ans.end());
	printf("%d\n", ans[ans.size()-1]);
	return 0;
} 
