#include <bits/stdc++.h>
using namespace std;
int a[10001];
int main() {
	int k;
	cin >> k;
	int thissum, maxsum = -1, left = 0, right = n-1;	
	for(int i = 0; i < k; i++)
		cin >> a[i];
	for(int i = 0; i < k; i++) {
		thissum = 0;
		for(int j = i; j < k; j++) {
			thissum += a[j];
			if(thissum > maxsum) {
				maxsum = thissum;
				left = i;
				right = j;
			}
		}
	}
	if(maxsum < 0) maxsum = 0;
	printf("%d %d %d", maxsum, a[left], a[right]);
	return 0;
}
/*case5:suchas(4)-1 0 -1 -1 ans:0 0 0
case4:suchas(4)-1 -1 -1 -1 ans:0 -1 -1*/
