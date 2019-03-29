#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	long long int a, b;
	int d;
	cin >> a >> b >> d;
	string sum = to_string(a+b), result;
	int len = sum.length();
	while(len >= 1) {
		string str;
		int t = (sum[0]-'0')/d;
		if((t!=0) && len>1) || len == 1)
			str += to_string(t);
		int temp = (sum[0]-'0'%b);
		for(int i = 1; i < len; i++) {
			t = (temp*10+s[i]-'0')/b;
			str += to_string(t);
					}
	}
	
}
