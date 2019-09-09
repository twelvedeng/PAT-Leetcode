#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
bool isprime(int n) {
	if(n <= 1) return false;
	for (int i = 0; i*i <= n; i++)
		if(n%i == 0) return false;
	return true;
} 
void judge(string ans, int m) {
	string str = to_string(stoi(ans) + 1);
	int n = 0;
	for (int i = 0; i < str.size(); i++)
		n += (str[i] - '0');
	int x = 3;
	while(++x && x < min(n, m)) {
		if(n%x == 0 && m%x == 0 && isprime(x)) {
			printf("%d %d\n", n, stoi(ans));
			break;
		}
	}
	//���Ҫ����ivi�����Ǿʹ̼���Ҫдcmp��Ҫ��vector 
}
int main() {
	int n, k, m;
	scanf("%d%d%d\n", &n, &k, &m);
	
	return 0;
}
