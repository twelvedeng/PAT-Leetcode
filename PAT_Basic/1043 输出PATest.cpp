#include <iostream>
#include <map>
using namespace std;
int main() {
	string str;
	cin >> str;
	map<char, int> m;
	for (int i = 0; i < str.length(); i++) 
		m[str[i]]++;
	for (int i = 0; i < str.length(); i++) {
		if(m['P']-- > 0) cout << "P"; 
		if(m['A']-- > 0) cout << "A";
		if(m['T']-- > 0) cout << "T";
		if(m['e']-- > 0) cout << "e";
		if(m['s']-- > 0) cout << "s";
		if(m['t']-- > 0) cout << "t";
	}
	return 0;
}
