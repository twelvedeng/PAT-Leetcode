#include <bits/stdc++.h>
using namespace std;
vector<string> hand, eye, mouth;
//string hand[11], eye[11], mouth[11];
int main() {
	string str;
	for(int i = 0; i < 3; i++) {
		getchar();
		getline(cin, str);
		getchar();
		//int cnt = 0;
		for(int j = 0; j < str.size(); j++) {
			string sy;
			if(str[j] == '[') {
				while(str[++j] != ']') {
					sy += str[j];
					j++;
					if(str[j] == ']') {
						if(i == 0)	hand.push_back(sy);// head[cnt] = sy;
						else if(i == 1) eye.push_back(sy);//eye[cnt] = sy;
						else mouth.push_back(sy);//mouth[cnt] = sy;
						//cnt++;
						break;
					}
				}
			}
		}
	}
	int q;
	cin >> q;
	int lh, le, m, re, rh;
	for(int i = 0; i < q; i++) {
		string ans;
		cin >> lh >> le >> m >> re >> rh;
		getchar();
		if(lh <= hand.size() && rh <= hand.size() && m <= mouth.size() 
			&& le <= eye.size() && re <= eye.size()) {
			ans = (hand[lh-1] + "(" + eye[le-1] + mouth[m-1] + 
				eye[re-1] + ")" + hand[rh-1]);
			cout << ans << endl;
		} else {
			//printf("Are you kidding me? @\/@\n");
			cout << "Are you kidding me? @\/@\n";
			//continue;
		}
	//	cout << ans << endl;
	} 
	return 0;
}
