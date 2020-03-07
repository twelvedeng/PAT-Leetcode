#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct member{
	string id, signin, signout;
};
bool cmp1(member a, member b) {
	return a.signin < b.signin;
}
bool cmp2(member a, member b) {
	return a.signout > b.signout;
}
int main() {
	int n;
	string ansf, anse;
	cin >> n;
	vector<member> v(n);
	for(int i = 0; i < n; i++) 
		cin >> v[i].id >> v[i].signin >> v[i].signout;
	sort(v.begin(), v.end(), cmp1);
	cout << v[0].id << " ";
	sort(v.begin(), v.end(), cmp2);
	cout << v[0].id;
	return 0;
}
