#include <cstdio>
#include <vector>
/*唯一4测试点段错误，大概率是有不属于链表的结点存在*/ 
using namespace std;
struct node{
	int data, next;
};
int main() {
    node list[100010];
    vector<int> v[3];
	int first, k, n, temp;
	scanf("%d%d%d", &first, &n, &k);
	//输入结点数据 
	for(int i = 0; i < n; i++) {
		scanf("%d", &temp);
		scanf("%d%d", &list[temp].data, &list[temp].next);
	}
	//根据头结点遍历排序分三个数组存放结点 
	int x = first;
	while(x != -1) {
		if(list[x].data < 0)
			v[0].push_back(x);
		else if(list[x].data >= 0 && list[x].data <= k)
			v[1].push_back(x);
		else if(list[x].data > k)
			v[2].push_back(x);
		x = list[x].next;
	}
	int cnt = 0;
   // n = v[0].size()+v[1].size()+v[2].size(); 
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < v[i].size(); j++) {
            cnt++;
			if(cnt != n) {
				printf("%05d %d %05d\n", v[i][j], list[v[i][j]].data, j==v[i].size()-1 ? v[i+1][0] : v[i][j+1]);
				
			}
            else printf("%05d %d -1\n", v[i][j], list[v[i][j]].data);
		}
	//	if(cnt == n-1) break;
	} 
	return 0;
}
