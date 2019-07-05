#include <iostream>
#include <map>
using namespace std;
int main() {
	int n, num, cnt = 0;
	cin >> n;
	map<int, int> m;
	for(int i = 0; i < n; i++) {
		cin >> num;
		m[num]++;
	}
	while(++cnt) 
		if(m[cnt] == 0) {
			cout << cnt;
			break;
		}
	return 0;
} 
