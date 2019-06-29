#include <iostream>
using namespace std;
int node[1001], m, node_num;
void postorder(int index);
int main() {
	cin >> m >> node_num;
	for (int i = 0; i < m; i++) {
		int ismin = 1, ismax = 1;
		for (int j = 1; j <= node_num; j++) 
			scanf("%d", &node[j]);
		for (int j = 2; j <= node_num; j++) {
			if(node[j/2] > node[j]) ismin = 0;
			if(node[j/2] < node[j]) ismax = 0;
		}
		if(ismax == 1) 
			printf("Max Heap\n");
		else
			printf(ismin==1?"Min Heap\n":"Not Heap\n");
		postorder(1);
	}
	return 0;
} 
void postorder(int index) {
	if(index > node_num) return;
	postorder(index *2);
	postorder(index *2 +1);
	printf("%d%s", node[index], index==1?"\n":" ");
}
