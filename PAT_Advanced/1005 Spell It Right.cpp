#include <iostream>
using namespace std;
int main() {
	string n;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n.length(); i++) 
		sum += n[i] - '0';
//	while (n >= 10) {
//		sum += n % 10;
//		n /= 10;
//	}
//	sum += n;
	string str = to_string(sum);
	string a[11] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int flag = 0;
	for (int i = 0; i < str.length(); i++) {
		if (flag) cout << " ";
		cout << a[str[i] - '0'];
		flag = 1;
	}
	return 0;
} 
