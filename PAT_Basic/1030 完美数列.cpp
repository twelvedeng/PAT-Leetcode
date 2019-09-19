#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n;
	long long p;
	scanf("%d %lld", &n, &p);
	vector<int> arr, ans;
	int x;
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		arr.push_back(x);
	}	
	sort(arr.begin(), arr.end());
	int max = -1;
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = i; j < n; j++) {
			if(arr[j]%p == 0) {
				if(arr[j]/p <= arr[i])
					cnt++;
			}
			else if(arr[j]/p+1 <= arr[i])
				cnt++;	
		}	
		if(cnt > max) max = cnt;
	}
	//sort(ans.begin(), ans.end());
	printf("%d\n", max);
	return 0;		
}
