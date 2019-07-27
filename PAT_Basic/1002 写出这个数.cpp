#include <iostream>
#include <string>
using namespace std;
int main()
{
	int sum = 0;
	string s;
	cin >> s;
	string piny[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

	for (int i = 0; i < s.length(); i++)
		sum += stoi(s.substr(i, 1));
	string num = to_string(sum);
	
	for (int i = 0; i < num.length(); i++) {
		if(i != 0) cout << " ";
		cout << piny[num[i] - '0'];
	}
	
	return 0;
}
