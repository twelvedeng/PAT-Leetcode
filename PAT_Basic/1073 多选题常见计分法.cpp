/*Ӧ�ö���һ���ṹ��
����ȷ����Ŀ�š���������ȷѡ��͸������Ž�ȥ*/
/*�����±�+1����Ŀ�žͺ��˷���ҲҪpush��ȥ*/ 
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
