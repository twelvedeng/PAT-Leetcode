#include <iostream>
using namespace std;
struct node{
	int ads, next;
	char data;
	bool flag;
}list[100005];
int main() {
	int first, start, n, temp;
	scanf("%d%d%d", &first, &start, &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &temp);
		cin >> list[temp].data >> list[temp].next;
		list[temp].ads = temp;
		list[temp].flag = false;
	}
	for( ; first != -1; first = list[first].next)
		list[first].flag = true;
	int index = 0;
	for( ; start != -1; start = list[start].next)
		if(list[start].flag) {
			printf("%05d\n", start);
			index = 1;
			break;
		}
	if(!index) printf("-1");
	return 0;
}
