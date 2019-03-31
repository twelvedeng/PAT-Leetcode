#include <iostream>
using namespace std;
int main() {
	int gt, k, n1, b, t, n2;
	scanf("%d%d", &gt, &k);
	for(int i = 0; i < k; i++) {
		scanf("%d%d%d%d", &n1, &b, &t, &n2);
		if(t > gt && gt != 0) {
			cout << "Not enough tokens.  Total = " << gt << ".\n";
			continue;
		}
		if(gt == 0) {cout << "Game Over.\n"; break;}
		if((b == 0 && n1 > n2)||(b == 1 && n1 < n2))
			{gt+=t; printf("Win %d!  ", t);} 
		else
			{gt-=t; printf("Lose %d.  ", t);} 
		printf("Total = %d.\n", gt);
	}
}
