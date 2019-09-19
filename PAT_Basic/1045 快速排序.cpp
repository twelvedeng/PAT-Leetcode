#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	int arr[n+1], hash[n+1];
	for(int i = 1; i <= n; i++) {
		scanf("%d", arr[i]);
		hash[i] = arr[i];
	}
	sort(arr+1, arr+1+n);
	int cnt = 0, ans[n+1] = {0}, max = -1;
	for(int i = 1; i <= n; i++) {
		if(hash[i] == arr[i]) {
			for(int j = 1; j <= n; j++) 
				if(hash[i] > max)
					max = hash[i];
			if(hash[i] >= max)
				ans[cnt++] = hash[i];
		}
	}
	printf("%d\n", cnt);
	int flag = 1;
	for(int i = 0; i < cnt; i++) {
		if(!flag) printf(" ");
		printf("%d", ans[i]);
		flag = 0;
	}
	//printf("\n");
	return 0;
} 
