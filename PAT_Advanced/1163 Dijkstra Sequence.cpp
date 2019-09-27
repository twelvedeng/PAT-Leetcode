#include <bits/stdc++.h>
using namespace std;
int n, m;
int e[1010][1010], dis[1010];
bool vis[1010];
int arr[1010];
const int inf = 0x3fffffff;
void dijk() {
	for (int i = 0; i < n; i++) 
		scanf("%d", &arr[i]);
	vector<int> ans;
	fill(dis, dis+1010, inf);
	fill(vis, vis+1010, false);
	dis[arr[0]] = 0;
	
	for(int i = 0; i < n; i++) {
		int u = -1, mini = inf;
		for(int j = 1; j <= n; j++) {
			if(!vis[j] && dis[j] < mini) {
				u = j;
				mini = dis[j];
			}
		}
		if(u == -1) break;
		vis[u] = true;
		for(int v = 1; v <= n; v++) {
			if(!vis[v] && dis[u] + e[u][v] < dis[v])
				dis[v] = dis[u] + e[u][v];
		}
	}
//	for(int i = 0; i < n; i++) 
//		printf("%d ", arr[i]);
//	
	for(int i = 0; i < n; i++) 
		ans.push_back(dis[arr[i]]);
//	for(int i = 0; i < n; i++) 
//		printf("%d ", ans[i]);
	
	if(is_sorted(begin(ans), end(ans))) 
		printf("Yes\n");
	else
		printf("No\n");
} 
int main() {
	int k;
	scanf("%d%d", &n, &m);
	int a, b, w;
	fill(e[0], e[0]+1010*1010, inf);
	for(int i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &w);
		e[a][b] = e[b][a] = w;
	}	
	scanf("%d", &k);
	for(int i = 0; i < k; i++) 
		dijk();
	return 0;
}
