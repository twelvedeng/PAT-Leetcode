/*部分正确*/ 
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
	char order;
	string s, result;
	scanf("%c\n", &order);
	getline(cin,s);
	int cnt = 1;
	if(order == 'C') {
		/*压缩*/ 
		for(int i = 0; i < s.length(); i++) {
			if(s[i] == s[i+1]) {
				cnt++;
			}
			if(s[i] != s[i+1]) {
				if(cnt != 1) {
					result += to_string(cnt)+s[i];
					cnt = 1;	
				}
				else
					result += s[i]; 
			}
		}
	}else if(order == 'D') {
		/*解压*/ int len;
		for(int i = 0; i < s.length(); i++) {
			if(isdigit(s[i])) {
				if(isalpha(s[i+1])||s[i+1]==' '){
					len = s[i]-'0';
					while(len-- != 0) result+=s[i+1];
				}else{
					int j = i;
					string siz;
					while(isdigit(s[j])){
						siz += s[j];
						j++;
					}
					int len = stoi(siz);
					while(len-- != 0) result+=s[j];
				}
			}
			if(isalpha(s[i])||s[i] == ' ') {
				if(isdigit(s[i-1]))
					continue;
				else
					result += s[i];
			}
		}
	} 
	cout << result;
	return 0;
} 
