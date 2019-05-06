#include <iostream>
#include <cctype>
#include <set>
using namespace std;
set<char> s;
int upper = 1;
void judge(string str){
	for (int i = 0; i < str.size(); i++) {
		s.insert(str[i]);	
		if(str[i] == '+') upper = 0;
	}
}
int main() {
	string bad, give;
	getline(cin, bad);
	getline(cin, give);
	judge(bad);
	for (int i = 0; i < give.size(); i++) {
		if(s.find(toupper(give[i])) == s.end()) {
			if(isupper(give[i]) && !upper)	continue;
			else	cout << give[i];
		}
	}	
	return 0;
}
