//#include <bits/stdc++.h>
//3�Ǹ���������n<10 
//92 5 233
//�������μ��ַ����ĳ��ô�������--substrлл���������ס�㻹ҪǶ�׼���for�����뿴������ת�Ĺ����𣿣��� 
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
