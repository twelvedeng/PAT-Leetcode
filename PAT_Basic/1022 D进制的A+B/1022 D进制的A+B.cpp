#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int a, b, d; 
	scanf("%d%d%d", &a, &b, &d);
	int sum = a + b;
	string str;
	if(sum == 0) {cout << 0; return 0;}
	while(sum/d != 0) {
		str += to_string(sum%d);
		sum /= d;
	}
	str += to_string(sum);
	
	reverse(str.begin(), str.end());
	cout << str;
}
