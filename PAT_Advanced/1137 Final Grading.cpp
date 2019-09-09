#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
struct stu{
	int pscore, mid, final, grade;
};
int main() {
	vector<stu> v;
	map<string, vector> m;
	int p, m, n;
	scanf("%d %d %d\n", &p, &m, &n);
	for (int i = 0; i < p; i++) 
		cin >> m[i] >> v[i].pscore;
	
	return 0;
}
