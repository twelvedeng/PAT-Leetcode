#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
struct node{
	int num, grade;	//加权总分 
	string sch;
};
struct stu{
	string hao;
	int gra;
	string sc;
};
bool cmp(struct node a, struct node b){
	if (a.grade != b.grade) return a.grade > b.grade;
	else if(a.num == b.num) return a.sch > b.sch;
	else return a.num < b.num;
}
int main() {
	int n;
	cin >> n;
	vector<stu> v(n);
	stu temp;
	for (int i = 0; i < n; i++){
		cin << temo.hao << temp.gra << temp.sc;
		v.push_back();
	}
}
