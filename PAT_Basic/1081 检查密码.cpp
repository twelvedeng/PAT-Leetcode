#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	cin >> n;
	string str;
	
	for(int i = 0; i < n; i++) {
		bool flag = true;
		int alpha = 0, digit = 0;
		cin >> str;
		cout << "Your password ";
		if(str.size() >= 6) {
			for(int j = 0; j < str.size(); j++) {
				char x = str[j];
				if(!isdigit(x) && !isalpha(x) && x != '.') {
					cout << "is tai luan le.";
					flag = false;
					break;
				}
				if(isdigit(x)) digit++;
				if(isalpha(x)) alpha++;
			}
			if(digit == 0 && flag) {
				cout << "needs shu zi.";
				flag = false;
			}
			if(alpha == 0 && flag) {
				cout << "needs zi mu.";
				flag = false;
			}
		} else {
			cout << "is tai duan le.";
			flag = false;
		}
		if(flag) cout << "is wan mei.";
		cout << endl;
	}

	return 0;
}
