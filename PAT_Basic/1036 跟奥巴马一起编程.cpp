#include <iostream>
using namespace std;
int main() {
	int n;
	char c;
	cin >> n >> c;
	for (int i = 0; i < n; i++) printf("%c", c);
	printf("\n");
	//�������Ҫע��nΪ������һ�����������ǶԶ�ȡ����һ
	for (int i = 0; n%2==0?(i<n/2-2):(i<n/2-1); i++) {
		printf("%c", c);
		for(int j = 0; j < n-2; j++) 
			printf(" ");
		printf("%c\n", c);
	}
	for (int i = 0; i < n; i++) printf("%c", c);
	printf("\n");
	return 0;
}
