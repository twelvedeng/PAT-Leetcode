#include <iostream>
using namespace std;
int cnt[37] = {0};
int main() {
	int n;
	string num; 
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> num;
		int sum = 0;
		for (int k = 0; k < num.size(); k++)
			sum += (num[k] - '0');
		cnt[sum]++;
	}
	int sum[37], x = 0;
	for (int i = 0; i < 37; i++) {
		if(cnt[i] != 0) sum[x++] = i;
	} 
	cout << x << endl;
	for (int i = 0; i < x-1; i++) {
		printf("%d ", sum[i]);
	}
	cout << sum[x-1] << endl;
	return 0;
}
