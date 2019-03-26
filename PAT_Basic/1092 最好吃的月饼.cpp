#include <iostream>
using namespace std;
int a[1005] = {0};
int main() {
	int kind, city, num;
	cin >> kind >> city;
	for (int i = 0; i < city; i++) {
		for (int j = 0; j < kind; j++) {	
			cin >> num;
			a[j] += num; 
		}
	}	//以上输入结束，开始比较大小
	int max = -1;
	int flag = 0;
	for (int i = 0; i < kind; i++) 
		if (a[i] >= max) max = a[i];
	cout << max << endl;
	for (int i = 0; i < kind; i++)
		if (a[i] == max) {
			if (flag) cout << " ";
			cout << i+1;
			flag = 1;
		}		
	return 0;
}
