#include <iostream>
#include <cmath>
using namespace std;
#define CLK_TCK 100
int main() {
	int c1, c2, h, m, s;
	scanf("%d%d", &c1, &c2);
	int clk = (c2 - c1 + 50)/CLK_TCK;	//先给秒进个位 
	h = clk/3600;
	m = clk%3600/60;
	s = clk%3600%60;
	printf("%02d:%02d:%02d", h, m, s);
	return 0;
} 
