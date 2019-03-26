#include <stdio.h>

int main(){
	int g, s, k, gi, si, ki;
	int price;
	scanf("%d.%d.%d %d.%d.%d", &g, &s, &k, &gi, &si, &ki);
	
	price = (gi*17*29+si*29+ki) - (g*17*29+s*29+k);
	if (price < 0)
	{
		price = price*(-1);
		printf("-");
	}
	printf("%d.%d.%d", price/(17*29), (price%(17*29))/29, (price%(17*29))%29);
	return 0;
} 
