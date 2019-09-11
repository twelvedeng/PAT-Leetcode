#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
struct node{
	int val, next = -1;
}list[100000];

int main() {
	int p, q, n;
	scanf("%d %d %d\n", &p, &q, &n);
	
	int site, value, right;
	for (int i = 0; i < n; i++) {
			scanf("%d %d %d", &site, &value, &right);
			list[site].val = value;
			list[site].next = right;
	} 
	
	int cntp = 0, cntq = 0;
	int temp = p;
	while(temp != -1) {
		temp = list[temp].next;
		cntp++;	
	}
	temp = q;
	while(temp != -1) {
		temp = list[temp].next;
		cntq++;	
	}
	int cnt = 0;
	if(cntp < cntq) swap(p, q);
	site = list[q].next;
	list[q].next = -1;
	temp = q;
	int index;
	while(site != -1) {
		index = list[site].next;
		list[site].next = temp;
		temp = site;
		site = index;
	}
	q = temp;
	for (int i = 0; i < n; i++) {
		printf("%05d %d ", p, list[p].val);
		cnt++;
		p = list[p].next;
//		if(p == -1) {
//			printf("-1\n");
//			break;
//		}
		if(cnt %2 == 0) {
			printf("%05d\n%05d %d ", q, q, list[q].val);
			q = list[q].next;
		}
		if(p == -1 && q == -1) {
			printf("-1\n");
			break;
		}
		printf("%05d\n", p);
	}
	return 0;
}
