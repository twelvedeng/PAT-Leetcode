#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;
//int num[10000] = {0};
vector<int> v;
void its_yin(int a) {
	for (int i = 1; i <= floor(sqrt(a) + 0.5); i++){
		if (a % i == 0) {
			v.push_back(i);
			if (a/i != a)
				v.push_back(a/i); 
		}
	}
	if (v.size() < 4) cout << "No\n";
	else {
		for (int i = 0; i < v.size(); i++) {
			
		}	
	}
}
int main() {
	int n, x;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> x;
		its_yin(x);
	}	
	return 0;
}
