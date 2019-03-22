#include <iostream>
#include <cctype>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	string sum = to_string(a + b);
	int len = sum.length();
	int cnt = 0; 
	for(int i = 0; i < len; i++) {
		cout << sum[i];
		if(isdigit(sum[i])) cnt++;
		if(cnt == 3 && i != len - 1) {
			cout << ",";
			cnt = 0;
		}
	}
	return 0;
} 
