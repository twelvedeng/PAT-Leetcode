#include <iostream>
#include <vector>
using namespace std;
struct node{
	string data;
	int left, right;
};
int main() {
	int n;
	scanf("%d"£¬ &n);
	vector<node> v(n+1);
	string data;
	int left, right;
	for (int i = 1; i <= n; i++) {
		cin >> data >> left >> right;
		v[i].push_back(node{data, left, right});
	}
	
	return 0;
}
