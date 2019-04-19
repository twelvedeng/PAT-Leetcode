#include <iostream>
#include <cctype>
#include <string>
using namespace std;
/*void print(char c) {
	if(isdigit(c)) cout << c;
	if(isalpha(c)) cout << toupper(c);
}*/
int main() {
	string s1, s2;
	string ans = "";
	cin >> s1 >> s2;
	for (int i = 0; i < s1.length(); i++) {
		if(s2.find(s1[i]) == s2.npos && ans.find(toupper(s1[i])) == ans.npos)
			ans += toupper(s1[i]);		
	} 
	cout << ans;
	return 0; 
}
