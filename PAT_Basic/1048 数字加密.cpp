#include <bits/stdc++.h>
using namespace std;
const int inf = 13;
int main() {
	string a, b;
	cin >> a >> b;
	getchar();
	string alpha[13];
	for(int i = 0; i < 13; i++) {
		if(i < 10)	alpha[i] = i + '0';
		if(i == 10) alpha[i] = 'J';
		if(i == 11) alpha[i] = 'Q';
		if(i == 12) alpha[i] = 'k';
	}
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	string ans;
	for(int i = 0; i < b.size(); i++) {
		if(i > a.size()-1) {
			ans += b[i];
			continue;
		}
		if(i%2 == 0) {
			int sum = (a[i]-'0' + (b[i]-'0'))%inf;
			string add = alpha[sum];
			ans = ans + add;
		} else {
			int add = b[i]-'0' - (a[i]-'0');
			if(add < 0) add += 10;
			ans += (add+'0');
		}
	}
	reverse(ans.begin(), ans.end());
	cout << ans;
	return 0;
}
