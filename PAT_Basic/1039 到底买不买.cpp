#include <iostream>
using namespace std;
int a[300] = {0};
int index[300] = {0};
int main() {
	string give, hong;
	cin >> give >> hong;
	int flag = 1, cnt = 0;
	for (int i = 0; i < hong.size(); i++) 
		a[hong[i]]++;
		
	for (int i = 0; i < give.size(); i++) 
		if(a[give[i]] > 0) a[give[i]]--;
	
	for (int i = 0; i < hong.size(); i++) 
		if(a[hong[i]] > 0 && index[hong[i]] == 0) { 
			cnt += a[hong[i]];
			index[hong[i]] = 1;
			flag = 0; 
		}
		
	if(flag == 0) cout << "No " << cnt;
	else cout << "Yes " << give.size()-hong.size();
	
	return 0;
}
