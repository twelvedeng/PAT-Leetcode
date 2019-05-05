#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
	int n, trynum;
	string s, t, str; 
	unordered_map<int, string> hash;
	
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		cin >> s >> trynum >> t;
		str = s + " " + t;
		hash[trynum] = str;
	}
	int cul;
	scanf("%d\n", &cul);
	for (int i = 0 ; i < cul; i++) {
		cin >> trynum;
		cout << hash[trynum] << endl;
	}
	return 0;
}
