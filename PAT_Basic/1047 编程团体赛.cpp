#include <iostream>
#include <map>
using namespace std; 
int main() {
	int n;
	scanf("%d\n", &n);
	map<int, int> hash;
	int que, num, gra, max = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d-%d %d", &que, &num, &gra);
		hash[que] += gra;
		if(hash[que] > max) max = hash[que];
	}
	for (auto it = hash.begin(); it != hash.end(); ++it) {
		if(it->second == max)
			cout << it->first << " " << max << endl;
	}
	return 0;
} 
