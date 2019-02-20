//#include <bits/stdc++.h>
//3是给出的数，n<10 
//92 5 233
//求求你牢记字符串的常用处理数组--substr谢谢（这个不记住你还要嵌套几个for你想想看你脑子转的过来吗？？？ 
#include <iostream>
#include <string>
//#include <cmath>
using namespace std;
int main() {
	int x, eg, result;
	cin >> x;
	for (int i = 0; i < x; i++) {
		cin >> eg;
		int flag = 1;
		int len = to_string(eg).length();
		for (int j = 1; j < 10; j++) {
			result = eg * eg * j;
		//	cout << result << endl;
			string str = to_string(result);
			string sub = str.substr(str.length()-len, len);
			if (stoi(sub) == eg) {
				cout << j << " " << result << endl;
				flag = 0;
				break;
			}
		} 
		if(flag)
			cout << "No" << endl;
	} 
	return 0;
} 
