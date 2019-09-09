#include <iostream>
#include <cmath> 
using namespace std;
bool isprime(int n) {
	if(n <= 1) return false;
	int sqr = int(sqrt(n*1.0));
	for (int i = 2; i <= sqr; i++)
		if(n%i == 0) return false;
	return  true;
}
int main() {
	int n, name;
	scanf("%d", &n);
	int rank[10000] = {0};
	for (int i = 1; i <= n; i++) {
		scanf("%d", &name);
		rank[name] = i;
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &name);
		printf("%04d: ", name);
		if(rank[name] != 0) {
			if(rank[name] == 1)
				printf("Mystery Award\n");
			else if(isprime(rank[name]))
				printf("Minion\n");
			else if(rank[name] == -1)
				printf("Checked\n");
			else
				printf("Chocolate\n");
			rank[name] = -1;
		}
		else printf("Are you kidding?\n"); 
	}
	return 0; 
}
