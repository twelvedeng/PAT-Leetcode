#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int m, n, a, b, index, x;
	scanf("%d%d%d%d%d", &m, &n, &a, &b, &index);
	//cin >> m >> n >> a >> b >> index;
	int flag = 0, num = n*m;
	
	for(int i = 0; i < num; i++) {
		scanf("%d", &x);
		if(x >= a && x <= b) x = index;
		if(flag != 0) printf(" ");
		printf("%03d", x);
		flag++;
		if(flag == n) {
			printf("\n");
			flag = 0;
		}	
	}
	return 0;
}
