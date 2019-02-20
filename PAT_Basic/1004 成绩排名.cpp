#include <iostream>
using namespace std;
int main()
{
	int n, grade, max = -1, min = 101;
	cin >> n;
	string name, num, maxname, maxnum, miname, minum;
	for(int i = 0; i < n; i++){
		cin >> name >> num >> grade;
		if(grade > max){
			max = grade;
			maxname = name;
			maxnum  = num;
		}
		if(grade < min){
			min = grade;
			miname = name;
			minum  = num;
		}
	}
	cout << maxname << " " << maxnum << endl << miname <<" " << minum; 
	return 0;
}
