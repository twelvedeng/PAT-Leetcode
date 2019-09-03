#include <iostream>
using namespace std;
int main() {
	string word[80];
	int num = 0;
	while(cin >> word[num]) 
		num++;
	for(int i = num; i >= 0; i--) {
		cout << word[i];
		if(i > 0) printf(" ");	
	}
	return 0;
}
