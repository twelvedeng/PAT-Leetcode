#include <iostream> 
#include <algorithm>
#include <vector> 
using namespace std;
int ans[100000];
int main() {
	int n;
	scanf("%d", &n);
	vector<int> arr(n), hash(n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		hash[i] = arr[i]; 
	}
	sort(arr.begin(), arr.end());
	int cnt = 0, max = -1;
	for(int i = 0; i < n; i++) {
		if(hash[i] == arr[i] && hash[i] > max)
			ans[cnt++] = hash[i];
		if(hash[i] > max)
			max = hash[i];
	}
	printf("%d\n", cnt);
	int flag = 1;
	for(int i = 0; i < cnt; i++) {
		if(!flag) printf(" ");
		printf("%d", ans[i]);
		flag = 0;
	}
	printf("\n"); 
	return 0;
} 
