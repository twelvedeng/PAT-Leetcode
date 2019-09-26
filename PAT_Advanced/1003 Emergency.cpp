#include <bits/stdc++.h>
using namespace std;
const int inf = 0x3fffffff;
const int maxn = 502;
int n, m, c1, c2;
int e[maxn][maxn], weight[maxn], w[maxn], d[maxn], cnt[maxn];
bool vis[maxn] = {false};

void dijkstra(int c1, int c2) {
	fill(d, d+maxn, inf);
	d[c1] = 0;
	w[c1] = weight[c1];
	cnt[c1] = 1;
	for(int i = 0; i < n; i++) {
		int u = -1, mini = inf;
		for(int j = 0; j < n; j++) {
			if(!vis[j] && d[j] < mini) {
				u = j;
				mini = d[j];
			}
		}
		if(u == -1) return;
		vis[u] = true;
		for(int v = 0; v < n; v++) {
			if(!vis[v] && e[u][v] != inf) {
				if(e[u][v]+d[u] < d[v]) {
					d[v] = e[u][v] + d[u];
					w[v] = weight[v] + w[u];
					cnt[v] = cnt[u];
				}else if(e[u][v]+d[u] == d[v]) {
					cnt[v] += cnt[u];
					if(weight[v]+w[u] > w[v])
						w[v] = weight[v]+w[u];
				}
			}
		}
	}
	printf("%d %d", cnt[c2], w[c2]);
}

int main() {
	fill(e[0], e[0]+maxn*maxn, inf);
	scanf("%d%d%d%d", &n, &m, &c1, &c2);
	for(int i = 0; i < n; i++)
		scanf("%d", &weight[i]);
	int a, b, power;
	for(int i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &power);
		e[a][b] = e[b][a] = power;
	}
	dijkstra(c1, c2);
	return 0;
}
