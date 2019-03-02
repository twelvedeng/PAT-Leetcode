#include <iostream>
using namespace std;
bool isprime(int a) {
	for (int i = 2; i*i <= a; i++)
		if (a%i == 0) return false;
	return true;
}
int main() {
	int n, flag = 0;
	scanf("%d", &n);
	if (isprime(n) && (isprime(n-6) || isprime(n+6))) {
		cout << "Yes" << endl;
		isprime(n-6) ? cout << n-6 : cout << n+6;
		flag = 1;
	}
	while (!flag){
		n++;
		if (isprime(n) && (isprime(n-6) || isprime(n+6))) {
			cout << "No" << endl << n;
			flag = 1;
		}
	}
	return 0;
}
