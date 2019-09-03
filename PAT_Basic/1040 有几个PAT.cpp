#include <iostream>
using namespace std;
const int mod = 1000000007;
int main() {
	string str;
	cin >> str;
	int len = str.length();
	int leftp[len] = {0}; 
	for (int i = 0; i < len; i++) {
		if(i > 0)
			leftp[i] = leftp[i-1];
		if(str[i] == 'P')
			leftp[i]++;
	}
	int ans = 0, right = 0;
	for(int i = len - 1; i >= 0; i--) {
		if(str[i] == 'T')
			right++;
		if(str[i] == 'A')
			ans = (ans + leftp[i]*right) % mod;
	}
	cout << ans << endl;
	return 0;
} 
