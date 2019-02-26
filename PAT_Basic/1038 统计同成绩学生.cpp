#include <iostream>
#include <vector>
using namespace std;
//int a[101] = {0};
int main() {
	int n, grade, m, search;
	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &grade); 
		a[grade]++;
	}
	scanf("%d", &m);
	int flag = 0;
	for (int i = 0; i < m; i++) {
		scanf("%d", &search);
		if (flag) printf(" "); 
		printf("%d", a[search]);
		flag = 1;
	}
	return 0;
}
