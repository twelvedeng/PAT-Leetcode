#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string s;
int len;	//这两玩意不提前定义好的话给你一堆error噢 
string huo[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string jin[13] = {"####", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
void digit(int num) {
	if (num < 13) cout << huo[num];
	else{
		cout << jin[num/13];
		if (num != 13) cout << " " << huo[num%13];
	}
}
void alpha() {
	int ten = 0, one = 0;
	string s1 = s.substr(0, 3), s2;
	if (len > 4) s2 = s.substr(4, 3);
	for (int i = 1; i < 13; i++){
		if (s1 == huo[i] || s2 == huo[i]) one = i;
		if (s1 == jin[i]) ten = i;
	}
	cout << ten*10 + one;
	
}
int main() {
	int n;
	cin >> n;
	getchar();	//非常无敌超级重要 
	for (int j = 0; j < n; j++) {
		getline(cin, s);
		len = s.length();
		if (isdigit(s[0]))
			digit(stoi(s));
		else
			alpha();
		cout << endl;
	} 
	return 0;
}
