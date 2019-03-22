#include <iostream>
using namespace std;
int main() {
	string s;
	int n, cnt = 1;
	cin >> s >> n;
	for (int i = 1; i < n; i++) {
		string t;
		for (int j = 0; j < s.length(); j++){
			if (s[j] == s[j+1]) {
				cnt++;
			}else {
				t += s[j] + to_string(cnt);	
				//	我写成t = t + ...就有一个测试点运行超时？ 
				cnt = 1; 
			}
		}
		s = t;
	}
	cout << s;
	return 0;
} 
