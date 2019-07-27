#include <iostream>
//#include <map>
using namespace std;
int main() {
	int power[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
//	map<int, char> mp;
//	mp[0] = '1'; mp[1] = '0'; mp[2] = 'X';
//	mp[3] = '9'; mp[4] = '8'; mp[5] = '7';
//	mp[6] = '6'; mp[7] = '5'; mp[8] = '4';
//	mp[9] = '3'; mp[10] = '2';
	char mp[11] = {'1','0','X','9','8','7','6','5','4','3','2'};	
	int n, cnt = 0;
	string num;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> num;
		int sum = 0;
		for (int j = 0; j < 17; j++) {
			if(isdigit(num[j]))
				sum += ((num[j]-'0') * power[j]);
			else {
				cout << num << endl;
				sum = 0;
				break;
			}
		}
		if(sum != 0) {
			int z = sum % 11;
			if(mp[z] == num[17])
				cnt++;
			else
				cout << num << endl; 
		}	
	}
//	cout << cnt << " " << n;
	if(cnt == n)
		cout << "All passed";
	return 0;
} 
