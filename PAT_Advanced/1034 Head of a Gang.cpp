#include <bits/stdc++.h>
using namespace std;
const int maxn = 1001*2;
map<string, int> name;
map<int, string> index;
map<string, int> ans;
int cnt = 1, k;
int tomap(string str) {
	if(name[str] == 0) {
		name[str] = cnt;
		index[cnt] = str;
		return ++cnt;
	} else {
		return name[str];
	}
}
int weight[maxn], G[maxn][maxn];
bool vis[maxn];
void dfs(int u, int &head, int &member, int &neweight) {
	vis[u] = true;
	member++;
	if(weight[u] > weight[head]) head = u;
	for(int v = 1; v < cnt; v++) {
		if(G[u][v] > 0) {
			//if(weight[v] > weight[u]) head = v;
			neweight += G[u][v];
			G[u][v] = G[v][u] = 0;
			if(vis[v] == false) {
				dfs(v, head, member, neweight);
			}
		}
	}
}
void judge() {
	for(int i = 1; i < cnt; i++) {
		if(vis[i] == false) {
			int head = i, member = 0, neweight = 0;
			dfs(i, head, member, neweight);
			if(member > 2 && neweight > k) {
				ans[index[head]] = member;
			}
		}
	}
}
int main() {
	int n;
	cin >> n >> k;
	string a, b;
	int w;
	for(int i = 0; i < n; i++) {
		cin >> a >> b >> w;
		int ina, inb;
		ina = tomap(a);
		inb = tomap(b);
		G[ina][inb] += w;
		G[inb][ina] += w;
		weight[ina] += w;
		weight[inb] += w;
	}
	judge();
	cout << ans.size() << endl;
	for(auto it = ans.begin(); it != ans.end(); it++)
		cout << it->first << " " << it->second << endl;
	return 0;
}
