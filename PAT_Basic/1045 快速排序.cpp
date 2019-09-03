#include <iostream>
using namespace std;
int main() {
	int num;
	int str[num];
	cin >> num;
	for (int i = 0; i < num; i++)
		cin >> str[i]; 
	int yes[num] = {1};
	int cnt = num;

/*	for (int i = 0; i < num; i++)
		for (int j = num-1; j > i; j--)
			if(str[j] < str[i] )
				{ yes[i] = 0; cnt--; break; }
	for (int i = num-1; i >= 0; i--)
		for (int j = 0; j < i; j++)
			if(str[j] > str[i])
				{ yes[i] = 0; cnt--; break; }
	cout << cnt << endl;
	int flag = 1;
	for (int i = 0; i < num; i++) {
		if(yes[i] != 0) {
			if(flag) {cout << str[i]; flag = 0;}
			else cout << " " << str[i];
		}
	}*/
	return 0;
} 
