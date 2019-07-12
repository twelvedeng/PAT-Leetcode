#include <iostream>
using namespace std;
int main() {
	int stu_num, issue_num, num, iss[10000] = {0}, x;
	string name;
	cin >> stu_num >> issue_num;
	for(int i = 0; i < issue_num; i++)
		{ cin >> x; iss[x]++; }
		
	int cnt_n = 0, cnt_i = 0;
	for(int i = 0; i < stu_num; i++) {
		int flag = 1;
		cin >> name >> num;
		while(num--){
			cin >> x;
			if(iss[x] != 0) {
				cnt_i++;
				if(flag) { cout << name << ":"; cnt_n++; }
				cout << " " << x;
				flag = 0;
			}
		}
		if(flag == 0) cout << endl;
	}
	cout << cnt_n << " " << cnt_i;
	return 0;
}
