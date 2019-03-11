#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	string z;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		cin >> z;
		int k = z.length()/2;
		int a = stoi(z.substr(0, k));
		int b = stoi(z.substr(k));
		if (a*b != 0 && stoi(z)%(a*b) == 0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
 
