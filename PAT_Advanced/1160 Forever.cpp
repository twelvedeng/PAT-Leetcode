#include <bits/stdc++.h>
using namespace std;
bool isprime(int n) {
	if(n <= 1) return false;
	int sqt = int(sqrt(n*1.0));
	for (int i = 2; i <= sqt; i++)
		if(n%i == 0) return false;
	return true;
}
int sum(int n) {
	int num = 0;
	while(n != 0) {
		num += n%10;
		n /= 10;
	}
	return num;
}
/*int gcd(int a, int b) {
	return a == 0 ? b : gcd(b%a, a);
}*/
int main() {
	int N, k, m;
	scanf("%d\n", &N);
	for(int i = 1; i <= N; i++) {
		scanf("%d %d", &k, &m);
		printf("Case %d\n", i);
		if(9*k < m) {
			printf("No Solution\n");
			continue;
		}
		bool flag = false;
		for(int j = pow(10, k-1); j < pow(10, k); j++) {
			//if(j%9 != 0) continue;	//cut leaves
//			int num = sum(j);
//			if(j%100 != 99) continue;
			if(sum(j) == m) {
				int n = sum(j+1);
				int g = __gcd(n, m);
				if(isprime(g) && g > 2) {
					flag = true;
					printf("%d %d\n", n, j);
				}
			}
		}
		if(flag == false) printf("No Solution\n");
	}	
	return 0;
}
