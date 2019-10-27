#include <bits/stdc++.h>
using namespace std;
double e;
int d;
int judge() {
	int k, cnt = 0;
	double x;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> x;
		if(x < e) cnt++;
	}
	if(cnt > k/2) 
		return cnt > d ? 0 : 1;
	return 2;
}
int main() {
	int n;
	cin >> n >> e >> d;
	int must = 0, pro = 0, re;
	for (int i = 0; i < n; i++) {
		re = judge();
		if(re == 0) must++;
		else if(re == 1) pro++;
	}
	printf("%.1f%% ", double(pro)/double(n)*100.0);
	printf("%.1f%%\n", double(must)/double(n)*100.0);
	return 0;
}
