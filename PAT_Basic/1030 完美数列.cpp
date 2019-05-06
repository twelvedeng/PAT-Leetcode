#include <iostream>
#include <vector>
//#include <cmath> 
#include <algorithm>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int a[100001];
int main() {
	int n, p;
	scanf("%d %d", &n, &p); 
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a+n-1, cmp);
	vector<int> cnt(n);
//	int min = a[0], max = a[0] * p;
	for (int i = 0; i <= n/2; i++) {
		int max = a[i], min;
		if(a[i]%p != 0) min = a[i]/p+1;
		else 			min = a[i]/p;
		for (int j = i; j < n; j++) {
			if(a[j] >= min && a[j] <= max)
				cnt[i]++;
		}
	} 
	sort(cnt.begin(), cnt.end());
	printf("%d", cnt.at(cnt.size()-1));
	return 0;
}
