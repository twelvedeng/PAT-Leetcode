//?getchar()�Ǹ�ɶ������ 
//ASCII�밡�ַ����Ե��������ã�������ͨ����Ϳ���������STL���map���� 
#include <iostream>
using namespace std;
int a[150] = {0};
int main() {
	string A, B, s;
	
	getline(cin, A);
	getline(cin, B);
	s = A + B; 
	for (int i = 0 ; i < s.size(); i++) {
		if (a[s[i]] == 0) cout << s[i];
		a[s[i]]++;
	}
	return 0;
}
