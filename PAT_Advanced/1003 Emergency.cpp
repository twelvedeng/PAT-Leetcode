//Dijkstra
#include <iostream>
#include <vector>
#include <algorithm>
int n, m, c1, c2;
//e: the length between two cities
//dist: sum of length from c1 to other city
//num: numbers of short path
//w: sum of cities' wight
//weight: every city's weight
int e[510][510], dist[510], num[510], w[510], weight[510];
bool visit[510];
const int inf = 99999999;
using namespcae std;
int main() {
	cin >> n >> m >> c1 >> c2;
	for (int i = 0; i < n; i++) 
		cin >> weight[i];
	//initialization array e and dist to positive infinity
	fill(e[0], e[0]+510*510, inf);
	fill(dist, dist+510, inf);
	int a, b, c;
	for (int i = 0; i < m; i++) {
		//two cities' name and length between
		cin >> a >> b >> c;
		e[a][b] = e[b][a] = c;
	}
	dist[c1] = 0;	//the source's length
	w[c1] = weight[c1];
	num[c1] = 1;
	
	for (int i = 0; i < n; i++) {
		int u = -1, minn = inf;
		for (int j = 0; j < n; j++) {
			if(visit[j] == false && dist[j] < minn) {
				u = j;
				minn = dis[j];
			}
		}
		if(u == -1)	break;
	}
	return 0;
	
}
