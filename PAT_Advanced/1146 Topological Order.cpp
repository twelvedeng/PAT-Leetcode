#include <iostream>
#include <vector>
using namespace std;
int main() {
	int ver, edge, num[1001] = {0};
	scanf("%d %d", &ver, &edge);
	int a, b;
	vector<int> next[1001];
	for (int i = 0; i < edge; i++) {
		scanf("%d %d", &a, &b);
		next[a].push_back(b);
		num[b]++;
	}
	int k, flag = 1;
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		int judge = 1;
		vector<int> times(num, num+ver+1);
		for (int j = 0; j < ver; j++) {
			scanf("%d", &a);
			if(times[a] != 0) judge = 0;
			for(int it : next[a])
				times[it]--;
		}
		if(judge == 1) continue;
		printf("%s%d", !flag?" ":"", i);
		flag = 0;
	}
	return 0;
} 
