#include <iostream>
#include <cmath>	//pow()
#include <algorithm>	//sort
using namespace std; 
int returnn(int x) {
	int nums[1005], cnt = 0;
	for(int i = 1; i <= x; i++) {
		if(2*pow(i, 2) - 1 <= x)
			nums[cnt++] = i;
		else 
			break; 
	}
	sort(nums, nums+cnt-1);
	return nums[cnt-1];
}
int main() {
	int x;
	char c;
	cin >> x >> c;
	int n = returnn(x);
	for(int i = n; i >= 1; i--) {
		for (int k = n-i; k > 0; k--) cout << " ";
		for (int j = 0; j < 2*i-1; j++) cout << c;
		cout << endl;
	}
	for(int i = 2; i <= n; i++) {
		for(int k = n-i; k > 0; k--) cout << " ";
		for(int j = 0; j < 2*i-1; j++) cout << c;
		cout << endl;
	}
	if(2*n*n - 1 != x) printf("%d\n", x-2*n*n+1);
	return 0;
}
