#include <iostream>
using namespace std;
int cnt[11] = {0};
int main() {
	string n;
	cin >> n;
	for(int i = 0; i < n.length(); i++) 
		cnt[n[i] - '0']++;
	for(int i = 0; i < 10; i++) 
		if(cnt[i] != 0) printf("%d:%d\n", i, cnt[i]);
		return 0;
} 
