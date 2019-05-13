#include <iostream>
using namespace std;
struct ques{
	int score;
	bool answer;
};
ques hey[101];
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) 
		cin >> hey[i].score;
	for (int i = 0; i < m; i++)
		cin >> hey[i].answer;
	bool ans;
	int cnt;
	for (int i = 0; i < n; i++) {
		cnt = 0;
		for (int j = 0; j < m; j++) {
			cin >> ans;
			if(ans == hey[j].answer)
				cnt += hey[j].score;
		}
		cout << cnt << endl;
	}
	return 0;
} 
