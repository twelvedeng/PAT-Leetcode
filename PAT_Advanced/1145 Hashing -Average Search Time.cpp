#include <iostream>
#include <vector>
using namespace std;
bool isprime(int n) {
	if(n <= 1) return false;
	for (int i = 2; i*i <= n; i++) 
		if (n % i == 0) return false;
	return true;
}
int main() {
	int tsize, n, m;
	scanf("%d %d %d\n", &tsize, &n, &m);
	while(!isprime(tsize)) tsize++;
	vector<int> arr(tsize); 
	int x, pos;
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		int flag = 0;
		for (int j = 0; j < tsize; j++) {
			pos = (x + j*j) % tsize;
			if(arr[pos] == 0) {
				arr[pos] = x;
				flag = 1;
				break;
			}
		}
		if(!flag) printf("%d cannot be inserted.\n", x);
	}
	int ans = 0;
	for (int i = 0; i < m; i++) {
		scanf("%d", &x);
		for (int j = 0; j <= tsize; j++) {
			ans++;
			pos = (x + j*j) % tsize;
			if(arr[pos] == x || arr[pos] == 0)
				break;
		}
	} 
	printf("%.1f\n", ans*(1.0)/m);
	return 0;
} 
