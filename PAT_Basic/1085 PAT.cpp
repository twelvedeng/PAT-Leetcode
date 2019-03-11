#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct list{
	int _gra, num;
	string sch;
};
bool cmp(list &a, list &b) {
	if (a.num != b.num) return a._gra > b._gra;
	else if (a._gra == b._gra) return a.num < b.num;
	return a.sch < b.sch;
}
int main() {
	
} 
