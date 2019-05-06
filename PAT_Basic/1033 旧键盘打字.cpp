#include <iostream>
#include <cctype>
#include <set>
using namespace std;
set<chark> s;
int upper = 1;
void judge(string str){
	for (int i = 0; i < str.size()-1; i++) {
		/*if(str[i] == '_') blank = 0;
		else a[tolower(str[i])] = 0;*/
		if(isalpha(str[i]))	s.insert(tolower(str[i]));
		else	s.insert(str[i]);	
		if(str[i] == ','||'.'||'-'||'+') upper = 0;
	}
}
int main() {
	string fstr, give;
	cin >> fstr >> give;
	judge(fstr);
	for (int i = 0; i < give.size()-1; i++) {
		if(isalpha(give[i]) && s.find(tolower(give[i])) == s.end()) {
			if(isupper(give[i]) && !upper)
				continue;
			else
				cout << give[i];
		}
		else if(s.find(give[i]) == s.end())
			cout << give[i];
	}
	return 0;
}
