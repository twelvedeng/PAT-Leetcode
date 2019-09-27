#include <bits/stdc++.h>
using namespace std;
int n, m;
int e[1010][1010], dis[1010];
bool vis[1010];
const int inf = 0x3fffffff;
int main() {
	scanf("%d%d", &n, &m);
	int a, b, w;
	for(int i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &w);
		e[a][b] = e[b][a] = w;
	}
	int x;
	int arr[1010];
	fill(dis, dis+1010, inf);
	dis[arr[0]] = 0;
	for(int i = 0; i < n; i++) {
		int u = -1, mini = inf;
		for(int j = 0; j < n; j++) {
			if(!vis[j] && dis[j] < mini) {
				u = j;
				mini = dis[j];
			}
		}
		if(u == -1) break;
		vis[u] = true;
		for(int v = 0; v < n; v++) {
			if(!vis[v] && dis[u] + e[u][v] < dis[v])
				dis[v] = dis[u] + e[u][v];
		}
	}
	int k;
	scanf("%d", &k);
	for(int i = 0; i < k; i++) {
		for(int j = 0; j < n; j++) {
			scanf("%d", &x);
			arr[j] = dis[x];
		}
		if(is_sorted(begin(arr), end(arr))) 
			printf("Yes\n");
		else
			printf("No\n");
	}
	
	return 0;
}
