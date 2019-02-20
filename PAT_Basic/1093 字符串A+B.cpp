//?getchar()是干啥的来着 
//ASCII码啊字符可以当成整数用，所以普通数组就可以啦不用STL里的map容器 
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
