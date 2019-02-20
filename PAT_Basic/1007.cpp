#include <iostream>
using namespace std;
bool isprime(int a){
	for(int i = 2; i*i <= a; i++)
		if(a%i == 0) return false;
	return true;
}

int main(){
	int n, cnt = 0;
	cin >> n;
	for(int i = 5; i <= n; i++)
		if(isprime(i-2) && isprime(i)) cnt++;
	cout << cnt;
	return 0;
}
