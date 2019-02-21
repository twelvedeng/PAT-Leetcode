//if太丑了我肯定要改的啦 
#include <iostream>
#include <cctype>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	string sum = to_string(a + b);
	int len = sum.length();
	int cnt = 0; 
	for (int i = 0; i < len; i++) {
		cout << sum[i];
		if (isdigit(sum[i])) cnt++;
		if (cnt == 3 && i != len - 1) {
			cout << ",";
			cnt = 0;
		}
//		if (sum[i] == '-') continue;	//执行i++然后判断语句顺便进入下一个循环 
//		if ((i + 1)%3 == 1 && i != len - 1) cout << ",";
//		if ( i != len - 1 && i != 0){
//			if (sum[0] == '-') {
//				if (i % 3 == 0) cout << ",";
//				}else{
//					if ((i+1) % 3 == 0) cout << ",";
//				}
//		}
	}
	return 0;
} 
