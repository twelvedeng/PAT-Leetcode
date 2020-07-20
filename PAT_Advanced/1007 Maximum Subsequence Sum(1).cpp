#include <bits/stdc++.h>
using namespace std;
int main () {
	int k, a[100001], index;
	int thissum = 0, maxsum = -1;
	cin >> k;
	int left = 0, right = n-1;
	for(int i = 0; i < k; i++) {
		cin >> a[i];
		thissum += a[i];
		if(thissum > maxsum) {
			maxsum = thissum;
			left = index;
			right = i;
		}else if(thissum < 0) {
			thissum = 0;
			index = i+1;
		}
	}
	if(maxsum < 0) maxsum = 0;
	printf("%d %d %d", maxsum, a[left], a[right]);
	return 0;
}
