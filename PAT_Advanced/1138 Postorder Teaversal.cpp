/*��ʵpre+in=>post��һ��Ԫ�ؾ����ҵ�in��ĵ�һ��Ҷ�ӽ��*/ 
#include <iostream>
#include <vector>
using namespace std;
vector<int> pre, in;
void findnode(int root, int left, int right);
int main() {
	int n;
	scanf("%d\n", &n);
	pre.resize(n);
	in.resize(n);
	for (int i = 0; i < n; i++) scanf("%d", &pre[i]);
	for (int i = 0; i < n; i++) scanf("%d", &in[i]);
	findnode(0, 0, n-1);
	return 0;
}
void findnode(int root, int left, int right) {
	if(left == right) {
		/*���ΪҶ��ʱ*/ 
		printf("%d\n", in[left]);	//or pre[root]
		return;
	}
	int i = left;
	while(in[i] != pre[root]) ++i;
	if(i == left)	/*��������Ϊ�� ����leftָ��������һ��*/ 
		findnode(root+1, i+1, right);	//����������Ѱ�� 
	else	/*����������Ϊ�� ����rightָ������ǰһ��*/ 
		findnode(root+1, left, i-1);	//����������Ѱ�� 
}
