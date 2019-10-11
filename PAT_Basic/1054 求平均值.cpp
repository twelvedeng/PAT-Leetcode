#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	string str;
	int cnt = 0;
	double sum = 0.0;
	for(int i = 0; i < n; i++) {
		cin >> str;
		int cntx = 0;
		bool flag = true;
		for(int i = 0; i < str.size(); i++) {
			if(!isdigit(str[i]) && str[i] != '.') {
				if(i == 0 && str[i] == '-') {
					continue;
				} 
				else {
					flag = false;
					break;
				}
			}
			if(str[i] == '.') {
				cntx++;
				if(i+2 < str.size()-1){
					flag = false;
					break;
				}
			}
			if(cntx > 1) {
				flag = false;
				break;
			}
		}
		if(flag == true && stod(str) >= -1000.0 && stod(str) <= 1000.0) {
			double x = stod(str);
			cnt++;
			sum += x;
		}else{
			cout << "ERROR: " << str << " is not a legal number\n";
		}
	}

	double ans = sum / cnt;
	printf("The average of %d number", cnt);
	if(cnt != 1) printf("s");
	if(cnt < 1) printf(" is Undefined\n");
	else	printf(" is %.2f\n", ans);

	return 0;
}
