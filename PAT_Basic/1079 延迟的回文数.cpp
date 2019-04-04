/*fix error£ºa, b may beyond int*/ 
#include <cstdio>
#include <iostream>	
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s, t;
	int cnt = 0;
	cin >> s;
	t = s;
	reverse(t.begin(), t.end());
	while (s != t && cnt < 10)	{
		string sum;
		cout << s;
		printf(" + ");
		cout << t;
		printf(" = ");
		for(int i = s.length()-1; i >= 0; i--) {
			int minus = s[i]-'0'+ t[i]-'0';
			if(i == 0 && minus/10 >= 1) 
				sum = to_string(minus) + sum;
			else
				sum = to_string(minus%10)+sum;
			if(minus/10 >= 1 && i != 0)
				s[i-1] = (s[i-1]-'0' + minus/10)+'0'; 
		}
		cout << sum << endl;
		t = sum;
		reverse(t.begin(), t.end());
		s = sum;
		cnt++;
	}
	if (s == t) {cout << s;	printf(" is a palindromic number.\n");}
	else if(cnt == 10){
		printf("Not found in 10 iterations.\n");
	}
	return 0;
}
