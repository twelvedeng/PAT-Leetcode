#include <iostream>
#include <vector>
using namespace std;
struct node{
	int data, next;
};
node list[100001];
vector<int> v[3];
int main() {
	int first, k, n, temp;
	scanf("%d%d%d", &first, &n, &k);
	for(int i = 0; i < n; i++) {
		scanf("%d", &temp);
		scanf("%d%d", &list[temp].data, &list[temp].next);
	}
	int x = first;
	while(x != -1) {
		if(list[x].data < 0)
			v[0].push_back(x);
		else if(list[x].data >= 0 && list[x].data <= k)
			v[1].push_back(x);
		else
			v[2].push_back(x);
		x = list[x].next;
	}
	int flag = 0;
	int i, j;
	for(i = 0; i < 3; i++) {
		for(j = 0; j < v[i].size(); j++) {
			if(list[v[i][j]].next != -1) {
				printf("%05d %d %05d\n", v[i][j], list[v[i][j]].data, j+1==v[i].size() ? v[i+1][0] : v[i][j+1]);
			}else{flag = 1; break;}
		}
		if(flag) break;
	} 
		printf("%05d %d -1\n", v[i][j], list[v[i][j]].data);
	return 0;
}
