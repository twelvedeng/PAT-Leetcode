#include <iostream>
using namespace std;
char a[256];
char b[256];
int main() {
	string give, hong;
	cin >> give >> hong;
	int count = 0;
	for (int i = 0; i < hong.size(); i++) a[hong[i]]++; 
	for (int i = 0; i < give.size(); i++) b[give[i]]++;
	for (int i = 0; i < hong.size(); i++) 
		if (a[hong[i]] <= b[hong[i]]){
			count += a[hong[i]];
			b[hong[i]] = 0;
		//	cout << count;
		}
	count == hong.size() ? cout << "Yes" << " " << give.size()-hong.size(): cout << "No" << " " << hong.size()-count-1; 
	return 0;
}
