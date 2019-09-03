#include <iostream>
#include <algorithm>
using namespace std;
struct student{
	int loc, score;
	int rank, locrank;
	string id;
}stu[300010];
//typedef struct student stu[30001];
bool cmp(student a, student b) {
	if(a.score != b.score)
		return a.score > b.score;
	else
		return a.id < b.id;	//dict
}
int main() {
	int n, k, cnt = 0;
	int ran;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &k);
		for (int j = 0; j < k; j++) {
			cin >> stu[cnt].id >> stu[cnt].score;
			stu[cnt].loc = i;
			cnt++;
		}
		sort(stu+cnt-k, stu+cnt, cmp);
		stu[cnt-k].locrank = 1;
		ran = 1;
		for (int r = cnt-k+1; r < cnt; r++) {
			if(stu[r].score == stu[r-1].score)	
				stu[r].locrank = ran;
			else
				stu[r].locrank = ran + 1;
			ran++;
		}
	}
	
	sort(stu, stu+cnt, cmp);
	stu[0].rank = 1;
	ran = 1;
	for (int i = 1; i < cnt; i++) {
		stu[i].score == stu[i-1].score ? stu[i].rank = ran : stu[i].rank = ran +1;
		ran++;
	}
	cout << cnt << endl;
	for (int i = 0; i < cnt; i++) {
		cout << stu[i].id << " " << stu[i].rank << " ";
		cout << stu[i].loc << " " << stu[i].locrank << endl;n
	}
	return 0;	
}
