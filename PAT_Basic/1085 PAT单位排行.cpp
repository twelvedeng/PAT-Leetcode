//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <unordered_map>
using namespace std;
struct sch{
	string school;
	int tws, ns;	//加权排名、学生人数 
};
bool cmp(sch a, sch b){
	if (a.tws != b.tws)
		return a.tws > b.tws;
	else if(a.ns != b.ns)
		return a.ns < b.ns;
	return a.school < b.school;
}
int main() {
	string id, school;
	double score;
	int n;
	unordered_map<string, int> cnt;	//存学生人数
	unordered_map<string, double> gre;	//存加权成绩 
	vector<sch> v;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		cin >> id >> score >> school;
		if (id[0] == 'B') score = score/1.5;
		if (id[0] == 'T') score = score*1.5;
		for (int j = 0; j < school.length(); j++)
			school[j] = tolower(school[j]);
		cnt[school]++;
		gre[school] += score;
	}
	/*for (int i = 0; i < cnt.size(); i++) 
		v.push_back(sch{school, gre[school], cnt[school]});*/
	for (auto it = cnt.begin(); it != cnt.end(); it++)
		v.push_back(sch{it->first, (int)gre[it->first], cnt[it->first]});
		
	sort(v.begin(), v.end(), cmp);
	int rank;
	printf("%d\n", (int)v.size());
	for (int i = 0; i < v.size(); i++) {
		if (v[i-1].tws != v[i].tws) rank = i + 1;
		printf ("%d ",rank);
		cout << v[i].school;
		printf(" %d %d\n", (int)v[i].tws, v[i].ns);
		//cout << v[i].school << v[i].tws << v[i].ns << endl;
	}
	return 0;
}

