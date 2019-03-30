//这道题用pyhton也太好写？？？字符串直接*** 
#include <iostream>
#include <cmath>
#include <cctype>
#include <string>
using namespace std;
string toe(char c, string str, string s) {
	
}
int main() {
	string s, result, str;
	char c;
	int i, pos;
	cin >> s;
	c = s[0];	//保存符号位 
	for(i = 0; i < s.length(); i++) {
		if(s[i] == '.') pos = i;	//记录小数点的位置 
		if(s[i] == 'E') {
			str = s.substr(i+1);
			cout << str;
			s = s.substr(1, i-1);
			cout << s;
		}	
	}	
	return 0;
}
