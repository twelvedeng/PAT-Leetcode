#include <iostream>
#include <algorithm>
using namespace std;
struct node{
	int ads, key, next;
}list[100005];
node result[100005];
bool cmp(node a, node b) {
	return a.key < b.key;
}
int main() {
	int head, n, temp;
	scanf("%d %d", &n, &head);
	for(int i=0; i < n; i++) {
		scanf("%d", &temp);
		scanf("%d%d", &list[temp].key, &list[temp].next);
		list[temp].ads = temp;
	}
	int cnt = 0;
	for( ; head != -1; head = list[head].next)
		result[cnt++] = list[head];
	
	sort(result, result+n, cmp);
	printf("%d %05d\n", cnt, result[0].ads);
	for(int i=0; i < n-1; i++)
		printf("%05d %d %05d\n", result[i].ads, result[i].key, result[i+1].ads);
	printf("%05d %d -1\n", result[n-1].ads, result[n-1].key);
	return 0;
}
