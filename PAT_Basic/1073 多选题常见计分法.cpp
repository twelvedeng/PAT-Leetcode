/*应该定义一个结构，
把正确的题目号、分数、正确选项和个数都放进去*/
/*数组下标+1做题目号就好了反正也要push进去*/ 
#include <iostream>
#include <vector>
using namespace std;
struct right{
	int full, opn, rop;
	char op[5]; 
}; 
vector<right> v;
int main() {
	int stu, q;
	scanf("%d%d", &stu, &q);
	int fscore, opt, rop;
	double score;
	char op;
	vector<char> v[q];
	for (int i = 0; i < q; i++) {
		scanf("%d%d%d", &fscore, &opt, &rop);
		v[i].full.push_back(fscore);
		for (int j = 0; j < rop; j++) {
			cin >> op;
			v[i].push_back(op);
		}
	}
	int choose;
	for (int i = 0; i < stu; i++) {
		scanf("(%d", &choose);
		//if(choose > v[i].size())
		for(int j = 0; j < choose; j++){
			cin >> x;
		}
	}
	return 0; 
}
