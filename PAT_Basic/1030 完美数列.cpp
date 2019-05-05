#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a[100001];
int main() {
	int n, p;
	scanf("%d %d", &n, &p); 
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a+n-1);
	vector<int> cnt(n);
//	int min = a[0], max = a[0] * p;
	for (int i = 0; i <= n/2; i++) {
		int min = a[i];
		int max = min * p;
		for (int j = i; j < n; j++) {
			if(a[j] >= min && a[j] <= max)
				cnt[i]++;
		}
	} 
	sort(cnt.begin(), cnt.end());
	printf("%d", cnt.at(cnt.size()-1));
	return 0;
}
