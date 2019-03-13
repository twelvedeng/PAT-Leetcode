#include <iostream>	
#include <string>
#include <algorithm>	//reverse()
using namespace std;
/*string re (string a){
	string b;
	int j = 0;
	for (int i = a.length()-1; i >= 0; i--)
		b[j++] = a[i];
	return b;
}*/
int main() {
	string s, t;
	int cnt = 0;
	cin >> s;
	t = s;
	reverse(s.begin(), s.end());
//	t = re(s);
	getchar();
	while (s != t && cnt < 10)	{
		int a = stoi(s), b = stoi(t);
		printf("%d + %d = %d\n", a, b, a+b);
		s = to_string(a+b);
		t = s;
		reverse(s.begin(), s.end());
	//	t = re(s);
		cnt++;
	}
	if (s == t) {
		cout << s;
		printf(" is a palindromic number.");
	}else{
		printf("Not found in 10 iterations.");
	}
	return 0;
}


