#include <bits/stdc++.h>
using namespace std;
int main() {
	int digits[] = {0, 1, 1, 2, 2};
	if(is_sorted(begin(digits), end(digits)))
		cout << "Yes" << endl;
	return 0;
}
