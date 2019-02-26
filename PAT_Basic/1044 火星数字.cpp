#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string huo[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string jin[13] = {"####", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
void digit(string s) {
	int num = stoi(s);
	if (num < 13) cout << huo[num];
	else{
		cout << jin[num/13];
		if (num != 13) cout << " " << huo[num%13];
	}
}
void alpha(string s) {
	int len = s.length(), ten = 0, one = 0;
	string s1 = s.substr(0, 3), s2;
	if (len > 4) s2 = s.substr(4, 3);
	for (int i = 0; i <= 13; i++){
		if (s1 == huo[i] || s2 == huo[i]) one = i;
		if (s1 == jin[i]) ten = i;
	}
	cout << ten*10 + one;
	
}
int main() {
	int n;
	string s;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		getline(cin, s);
		if (isdigit(s[0]))
			digit(s);
		else
			alpha(s);
		cout << endl;
	} 
	return 0;
}
