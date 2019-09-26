#include <iostream>
#include <vector>
using namespace std;
const int inf = 99999999999;
int dis[510], e[510][510], w[510][510], weight[510], pre[510];
bool visit[510] = {false};
int main() {
	int v, edge;
	scanf("%d%d", &v, &edge);
	int start, end, power;
	for (int i = 0; i < edge; i++) {
		scanf("%d%d%d", &start, &end, &power);
		e[start][end] = 1;
		w[start][end] = power;
	}
	return 0;
}