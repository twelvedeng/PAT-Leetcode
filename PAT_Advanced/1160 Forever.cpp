#include <bits/stdc++.h>
using namespace std;
#define fs first
#define sc second
typedef pair<int, int> p;
vector<p> ans;
bool cmp(p a, p b) {
	if(a.fs == b.fs) return a.sc < b.sc;
	return a.fs < b.fs;
}
bool isprime(int n) {
	if(n <= 1) return false;
	int sqt = int(sqrt(n*1.0));
	for (int i = 2; i <= sqt; i++)
		if(n%i == 0) return false;
	return true;
}

int sum(int n) {
	int num = 0;
	while(n != 0) {
		num += n%10;
		n /= 10;
	}
	return num;
}

/*int gcd(int a, int b) {
	return a == 0 ? b : gcd(b%a, a);
}*/
int main() {
	int N, k, m;
	scanf("%d\n", &N);
	for(int i = 1; i <= N; i++) {
		scanf("%d %d", &k, &m);
		printf("Case %d\n", i);
		if(9*k < m) {
			printf("No Solution\n");
			continue;
		}
		bool flag = false;
        
		for(int j = pow(10, k-1); j < pow(10, k); j%100 == 99 ? j+=100:j++) {
			if(sum(j) == m) {
				int n = sum(j+1);
				int g = __gcd(n, m);
				if(isprime(g) && g > 2) {
					flag = true;
				//	x.fs = n;
				//	x.sc = j;
					ans.push_back(p(n, j));
				}
			}
		}
		if(flag == false) 
			printf("No Solution\n");
		
		if(flag) {
			sort(ans.begin(), ans.end(),cmp);
			for(auto i : ans)
				printf("%d %d\n", i.fs, i.sc);
		}
		ans.clear();
	}	
	return 0;
}
