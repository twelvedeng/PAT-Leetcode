#include <iostream> 
using namespace std;
int a[10000] = {0};
int main() {
	int n, pai, x;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> pai;
		x = abs(pai - i);
		a[x]++;
	}
	for (int i = 9999; i >= 0; i--)
		if (a[i] != 0 && a[i] >= 2)
			cout << i << " " << a[i] << endl;
	return 0;
}
