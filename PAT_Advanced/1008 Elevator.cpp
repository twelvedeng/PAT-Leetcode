#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	int index = 0, now, ans = 0;
	for(int i = 0; i < n; i++) {
		scanf("%d", &now);
		if(now > index) ans += (now-index)*6;
		if(now < index) ans += (index-now)*4;
		ans += 5;
		index = now;
	}
	printf("%d", ans);
	return 0;
}
