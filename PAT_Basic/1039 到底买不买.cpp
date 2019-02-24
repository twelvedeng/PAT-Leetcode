#include <iostream>
using namespace std;
char a[70] = {0};
char b[70] = {0};
int main() {
	string give, hong;
	getline(cin, give);
	getline(cin, hong);
	int count = 0;
	for (int i = 0; i < hong.size(); i++) a[hong[i]]++; 
	for (int j = 0; j < give.size(); j++) b[give[j]]++;
	for (int i = 0; i < hong.size(); i++) 
		if (a[hong[i]] <= b[hong[i]]){
			count += a[hong[i]];
			b[hong[i]] = 0;
		}
	count == hong.size() ? cout << "Yes" << " " << give.size()-hong.size(): cout << "No" << " " << hong.size()-count-1; 
	return 0;
}
