#include <iostream>
#include <cmath>
using namespace std;
struct node{
	int ads, data, next;
}list[100005];
int index[100005] = {0};
node result[100005], mo[100005];
int main() {
	int first, n, temp;
	scanf("%d%d", &first, &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &temp);
		list[temp].ads = temp;
		scanf("%d%d", &list[temp].data, &list[temp].next);
	}
	int sum = 0, cnt = 0;
	//现在这样只能比较附近两个，这个应该要整所有，用hash保存已经输出了的那些 
	while(first != -1) {
		int num = list[first].data;
		int nex = list[first].next;
		if(index[abs(num)] != 1) {
			result[sum++] = list[first];
			index[abs(num)] = 1;
		}else{
			mo[cnt++] = list[first];
		}	
		first = nex;
	}
	for(int i = 0; i < sum-1; i++) 
		printf("%05d %d %05d\n", result[i].ads, result[i].data, result[i+1].ads);
	printf("%05d %d -1\n", result[sum-1].ads, result[sum-1].data);
	for(int i = 0; i < cnt-1; i++) 
		printf("%05d %d %05d\n", mo[i].ads, mo[i].data, mo[i+1].ads);
	printf("%05d %d -1\n", mo[cnt-1].ads, mo[cnt-1].data);
	
	return 0;
}
//23`测试点3没过【答案错误】 
