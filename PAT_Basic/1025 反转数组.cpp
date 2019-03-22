#include <iostream>
#include <algorithm>	//reverse()
using namespace std;
int main() {
	int first, n, k, temp, cnt = 0;
	scanf("%d%d%d", &first, &n, &k);
	int data[100001], next[100001], list[100001];
	for(int i = 0; i < n; i++) {
		scanf("%d", &temp);
		scanf("%d%d", &data[temp], &next[temp]);
	}
	while(first != -1) {
		list[cnt++] = first;	//对给出的链表先排个初始顺序 
		first = next[first];	//first指向下一node位置 
	}
	for(int i = 0; i < cnt-cnt%k; i+=k) 
		reverse(list+i, list+i+k);
		
	for(int i = 0; i < n-1; i++)
		printf("%05d %d %05d\n", list[i], data[list[i]], list[i+1]);
	printf("%05d %d -1\n", list[n-1], data[list[n-1]]);
	return 0;
}
24`
