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
	int max = 0, cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i+max; j < n; j++) {
			if(arr[j] <= arr[i]*p) 
                cnt = j-i+1;
			else break;
            if(cnt > max) max = cnt;
        }
	}
	printf("%d\n", max);
	return 0;		
}
