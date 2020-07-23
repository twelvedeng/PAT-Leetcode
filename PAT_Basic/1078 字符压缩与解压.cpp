#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void c(string str) {
	int cnt = 1;
	for(int i = 1; i <= str.size(); i++) {
		if(str[i] == str[i-1])
			cnt++;
		else{
				if(cnt > 1) cout << cnt;
				cout << str[i-1];
				cnt = 1;
			}
	} 
}
void d(string str) {
	string num = "";
	for(int i = 0; i < str.size(); i++) {
		if(isdigit(str[i])) num = num + str[i];
		else {
			if(num.size()) {
				for(int j = 0; j < stoi(num); j++)
                    cout << str[i];
				num = "";
			}
            else    cout << str[i];
		}
	} 
}
int main() {
	string str;
	char order;
	cin >> order;
	getchar();	//£¡ 
	getline(cin, str);
	
	if(order == 'C')
		c(str);
	else
		d(str);	
		
	return 0;
}

