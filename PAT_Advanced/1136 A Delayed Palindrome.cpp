#include <iostream>	
#include <string>
#include <algorithm>	//reverse()
using namespace std;
int main() {
	string s, t;
	int cnt = 0;
	cin >> s;
	t = s;
	reverse(s.begin(), s.end());
	getchar();
	while (s != t && cnt < 10)	{
		int a = stoi(t), b = stoi(s);
		printf("%d + %d = %d\n", a, b, a+b);
		s = to_string(a+b);
		t = s;
		reverse(s.begin(), s.end());
		cnt++;
	}
	if (s == t) {
		cout << s;
		printf(" is a palindromic number.\n");
	}else /*if(cnt == 10)*/{
		printf("Not found in 10 iterations.\n");
	}
	return 0;
}


