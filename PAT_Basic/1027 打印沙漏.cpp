#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num;
	char c;
	scanf("%d %c", &num, &c);
	int n = sqrt((num+1)/2);
	int start = 2*n - 1;
	for (int i = n; i >= 1; i--) {
		if(n-i)
			for (int j = 0; j < n-i; j++)
				printf(" ");
		for (int j = 0; j < 2*i - 1; j++)
			printf("%c", c);
		printf("\n");
	}
	for (int i = 2; i <= n; i++) {
		if(n-i)
			for (int j = 0; j < n-i; j++)
				printf(" ");
		for (int j = 0; j < 2*i - 1; j++)
			printf("%c", c);
		printf("\n");
	}
	printf("%d\n", num - 2*n*n +1);
	return 0;
} 
