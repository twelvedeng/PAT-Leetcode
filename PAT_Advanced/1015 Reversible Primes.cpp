#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool isprime(int n);
int main() {
	int n, d;
	while(scanf("%d", &n) != EOF) {
		if(n < 0) break;
		scanf("%d", &d);
		if(isprime(n) == false) {
			printf("NO\n");
			continue;
		}
		
		string str;
		do{
			str += to_string(n%d);
			n /= d;
		} while(n != 0);
		//cout << str;
		int y = stoi(str), p = 1, n = 0;
		while(y != 0) {
			n = n + (y % 10) * p;
			y = y / 10;
			p = p * d; 
		}
	//cout << n;
		//str += to_string(n);
		//reverse(str.begin(), str.end());
		if(isprime(n))printf("Yes\n");
		else	printf("No\n");
	}
	return 0;
}
bool isprime(int n) {
    if (n <= 1) return false;
    int sqr = (int)sqrt(1.0 * n);
    for (int i = 2; i <= sqr; i++)
        if (n % i == 0) return false;
    return true;
}
