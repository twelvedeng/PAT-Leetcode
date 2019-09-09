#include <iostream>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
void answer(int n) {
	string ans;
	while (n > 0) {
		ans += (n%2 + '0');
		n /= 2;
	}
	reverse(ans.begin(), ans.end());
	int cnt = 0;
	for (int i = 0; i < ans.size(); i++) 
		if(ans[i] == '0') cnt++;
	printf("%d %d\n", cnt, ans.size()-cnt);
}
 
int main() {
	string str;
	getline(cin, str);
	int sum = 0;
	for (int i = 0; i < str.size(); i++) {
		if(isalpha(str[i]))
			sum += (tolower(str[i]) - 96);
	}
	answer(sum);
	return 0;
}
