#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int a[1001];
int n;
void printpath(int index);
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) 
		scanf("%d", &a[i]);
	v.push_back(a[1]);
	printpath(1);
	int ismin = 1, ismax = 1;
	for (int i = 2; i <= n; i++) {
		if(a[i/2] > a[i]) ismin = 0;
		if(a[i/2] < a[i]) ismax = 0;
	}
	if(ismax == 1)
		printf("Max Heap\n");
	else
		printf(ismin == 1 ? "Min Heap\n":"Not Heap\n");
	return 0;
}
void printpath(int index) {
	if(index *2 > n && index *2 +1 > n) {
		if(index <= n) {
			for (int i = 0; i < v.size(); i++)
				printf("%d%s", v[i], i!=v.size()-1 ? " ":"\n");
		}
	}else {
		v.push_back(a[index *2 +1]);	//?
		printpath(index *2 +1);
		v.pop_back();
		v.push_back(a[index *2]);
		printpath(index *2);
		v.pop_back();
	}
}

