#include <iostream>
#include <cctype>
using namespace std;
int a[130] = {0};
int main() {
	string str;
	getline(cin, str);
	getchar();
	for (int i = 0; i < str.size(); i++) {
		if(isalpha(str[i])) 
			a[tolower(str[i])]++;
	}
	int index, max = -1;
	for (int i = 0; i < 130; i++) 
		if(a[i] > max) { max = a[i]; index = i; } 
	printf("%c %d", index, max);
	return 0;
}
