/*其实pre+in=>post第一个元素就是找到in里的第一个叶子结点*/ 
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
		/*结点为叶子时*/ 
		printf("%d\n", in[left]);	//or pre[root]
		return;
	}
	int i = left;
	while(in[i] != pre[root]) ++i;
	if(i == left)	/*当左子树为空 ，令left指向根结点下一个*/ 
		findnode(root+1, i+1, right);	//在右子树中寻找 
	else	/*当左子树不为空 ，将right指向根结点前一个*/ 
		findnode(root+1, left, i-1);	//在左子树中寻找 
}
