#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, cnt = 0;
	string name, birth;
	scanf("%d", &n);
	int old = 20140907, young = 0;
	string on, yn;
	for (int i = 0; i < n; i++) {
		cin >> name >> birth;
		birth = birth.substr(0, 4)+birth.substr(5, 2)+birth.substr(8, 2);
		int day = stoi(birth);
		if(day > 20140906 || day < 18140906)
			continue;
		cnt++;
		if(day < old) {old = day; on = name;}
		if(day > young) {young = day; yn = name;}
	}
	if(cnt) {printf("%d ", cnt); cout << on << " " << yn;}
	else
		cout << 0;
	return 0;
}
