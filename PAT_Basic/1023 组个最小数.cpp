#include <iostream>
using namespace std;
int a[11]={0};
int main() {
	int x, flag = 0;
	for(int i = 0; i < 10; i++)
		cin >> a[i];
	for(int i = 1; i < 10; i++){
		if(a[i] != 0) {
			cout << i;
			a[i]--;
			for(int j = 0; j < a[0]; j++)
				cout << 0;
			flag = 1;
		}
		if(flag) break;
	} 
	for(int i = 1; i < 10; i++)
		for(int j = 0; j < a[i]; j++)
			cout << i;
	return 0;
}

