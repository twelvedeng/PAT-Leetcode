#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string huo[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string jin[13] = {"####", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int main() {
	int n, len;
	string s;
	cin >> n;
	while (n) {
		getline(cin, s);
		len = s.length();
		if (isdigit(s[0])){
			int num = stoi(s);
		}else if(isalpha(s[0])){
			int ten = 0, one = 0, flag = 0;
			string s1 = s.substr(0, 3), s2;
			if (len > 4) {
				s2 = s.substr(4, 3);
				flag = 1;
			}
			for (int i = 1; i <= 13; i++) {
				if (flag) {
					if (s1 == jin[i]) ten = i;
					if (s2 == huo[i]) one = i;
					cout << ten*13 + one;
				}else{
					if(s1 == huo[i]) one = i;
					cout << one;
				}
			}
		}
		cout << endl;
	}
	return 0;
}
