#include <iostream>
using namespace std;
int arr[3];
int main(){
	int n, i = 0;
	cin >> n;
	while (n != 0){
		arr[i++] = n%10;
		n = n/10;
	}
	for(int j = 0; j < arr[2]; j++)cout << "B";
	for(int j = 0; j < arr[1]; j++)cout << "S";
	for(int j = 0; j < arr[0]; j++)cout << j+1;
	return 0;
}
