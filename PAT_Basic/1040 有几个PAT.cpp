#include <iostream>
using namespace std;
int findchar( string str, char c ) {
	int cnt = 0;
	for(int i = 0; i < str.size(); i++)
		if(str[i] == c) cnt++;
	return cnt;
}
int main() {
	string str;
	cin >> str;
	int cntp, cntt;
	long long int put = 0;
	for (int i = 0; i < str.size(); i++) {
		if(str[i] == 'A') {
			cntp = findchar(str.substr(0, i+1), 'P');
			cntt = findchar(str.substr(i), 'T');
			put += (cntp * cntt)%1000000007;
		}
	}
	cout << put%1000000007;
	return 0;
}
