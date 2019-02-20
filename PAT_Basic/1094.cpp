//判断素数的呗？
//l长度，k截出的长度
//给出一大串 
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isprime(int a) {
  //if (a == 0 || a == 1) return false;
	for (int i = 2; i * i <= a; i++)
		if (a % i == 0) return false;
	return true;
}
int main() {
	int l, k;
	string id;
	cin >> l >> k >> id;
	//int flag = 1;	
	//?其实我觉得这道题有种最大子列和的诡异感
	for (int i = 0; i <= l-k; i++) {
		string str = id.substr(i, k);
		if (isprime(stoi(str))) {
			cout << str;
			return 0;
		}
	} 
	cout << "404" << endl;
	return 0;
}
