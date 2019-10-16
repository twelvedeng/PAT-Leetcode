#include <bits/stdc++.h>
using namespace std;
const int inf = 13;
int main() {
	string a, b;
	cin >> a >> b;
	getchar();
	char alpha[14] = {"0123456789JQK"};
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int len;
	if(a.size() > b.size()) {
		len = a.size();
		for(int i = b.size(); i < a.size(); i++)
			b.insert(i, "0");
	} else {
		len = b.size();
		for(int i = a.size(); i < b.size(); i++)
			a.insert(i, "0");
	}
	string ans;
	for(int i = 0; i < len; i++) {
		if(i%2 == 0) {
			int sum = (a[i]-'0' + (b[i]-'0'))%inf;
			ans += alpha[sum];
		} else {
			int add = b[i] - a[i];
			if(add < 0) add += 10;
			ans += alpha[add];
		}
	}
	reverse(ans.begin(), ans.end());
	cout << ans;
	return 0;
}
