#include <iostream>
using namespace std;
int main() {
	int n, a, x, b, y;
	int jia = 0, yi = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> x >> b >> y;
		if(a+b == x && a+b != y) yi++;	
		else if(a+b == y && a+b != x) jia++;
	}
	printf("%d %d\n", jia, yi);
	return 0;
}
