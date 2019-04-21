#include <iostream>
#include <algorithm>
using namespace std;
int a[10001];
int main() {
	int n, p;
	scanf("%d %d", &n, &p); 
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a+n-1);
	int cnt = 0;
	int min = a[0], max = a[0] * p;
	for (int i = 0; i < n; i++) {
		if(a[i] >= min && a[i] <= max)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
