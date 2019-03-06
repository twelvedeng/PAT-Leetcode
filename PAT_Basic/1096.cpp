#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;
//int num[10000] = {0};
vector<int> v;
void its_yin(int x) {
	for (int i = 1; i <= floor(sqrt(x) + 0.5); i++){
		if (x % i == 0) {
			v.push_back(i);
			if (x/i != x)
				v.push_back(x/i); 
		}
	}
	int flag = 0;
	if (v.size() < 4) cout << "No\n";
	else {
		for (int a = 0; a < v.size() && !flag; a++) 
			for(int b = a+1; b < v.size() && !flag; b++)
				for(int c = b+1; c < v.size() && !flag; c++)
					for (int d = c+1; d < v.size() && !flag; d++)
						if (x % (v.at(a)+v.at(b)+v.at(c)+v.at(d))) {
							cout << "Yes\n";
							flag = 1;
						}
		if (!flag) cout << "No\n";
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
