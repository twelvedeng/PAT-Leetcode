//这莫名其妙给我一种可以用hashing表的感觉 
#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector> 
using namespace std;
bool cmp(string a, string b) {
	int a1 = stoi(a.substr(7, 8));
	int b1 = stoi(b.substr(7, 8));
	return a1 < b1;
}
int a[106] = {0};
int main() {
	int n, m;
	string s1[106], s2[106];
	scanf("%d", &n);
	vector<string> v;
	for (int i = 0; i < n; i++) 
		cin >> s1[i];
	scanf("%d", &m);
	int flag = 0;
	for (int i = 0; i < m; i++) {
		cin >> s2[i];
		for (int j = 0; j < n; j++)
			if(s2[i] == s1[j]) {a[j] = 1; flag = 1;}
	}
	if (flag == 1){
		for (int i = 0; i < n; i++) 
			if (a[i] == 1) v.push_back(s1[i]);
		printf("%d\n", v.size());
	}else{
		for (int i = 0; i < m; i++)
			v.push_back(s2[i]);
			cout << 0 << endl;
	}
	
	sort(v.begin(), v.end(), cmp);
	//if(flag==1) ? printf("%d\n", v.size()) : cout << 0\n;
	cout << v.front();
	return 0;
}
