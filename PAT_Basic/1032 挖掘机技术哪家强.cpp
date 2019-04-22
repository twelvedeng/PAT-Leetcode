#include <iostream>
#include <map> 
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	map<int, int> hash;
	int num, grade, max = 0;
	for (int i = 0; i < n; i++) {
		cin >> num >> grade;
		hash[num] += grade;
		if(hash[num] > max) max = hash[num];
	} 
	/*std::map<int, int>::iterator it;*/
	for (auto it = hash.begin(); it != hash.end(); ++it) {
		if(it->second == max)
			cout << it->first << " " << max << endl;
	}
	return 0;
}
