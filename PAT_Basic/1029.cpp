//要解决问题：一个坏键只输出一次 
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int a[256] = {0};
void print(char c) {
	if(isdigit(c)) cout << c;
	if(isalpha(c)) cout << toupper(c);
}
int main() {
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	getchar();
	int flag[256] = {1}; 
	for (int i = 0; i < s2.length(); i++) a[s2[i]]++;
	for (int i = 0; i < s1.length(); i++) {
		if (a[s1[i]] == 0 && flag[s1[i]] == 1)
		 {
			print(s1[i]);
			flag[s1[i]] = 0;
		}
	}
		
	return 0; 
}
