#include <iostream>
#include <vector>
using namespace std;
int a[1005] = {0};
int main() {
	int kind, city, num;
	cin >> kind >> city;
	for (int i = 0; i < city; i++) {
		//�������б���
		for (int j = 0; j < kind; j++) {
			//�������త��	
			cin >> num;
			a[j] += num; 
		}
	}
	//���������������ʼ�Ƚϴ�С
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
