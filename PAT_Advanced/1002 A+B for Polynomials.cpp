#include <iostream>
using namespace std;
int main() {
	int n, m, expon, cnt = 0;
	double co, coef[1001] = {0.0};
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> expon >> co;
		coef[expon] = co;
	}
	cin >> m;
	for(int i = 0; i < m; i++) {
		cin >> expon >> co;
		coef[expon] += co;
	}
	for (int i = 0; i < 1001; i++) 
		if(coef[i] != 0) cnt++;
	printf("%d", cnt);
	for (int i = 1000; i >= 0; i--)
		if(coef[i] != 0)
			printf(" %d %.1f", i, coef[i]);
	return 0;
}
