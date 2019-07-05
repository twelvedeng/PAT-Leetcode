#include <iostream>
using namespace std;
int main() {
	string str;
	cin >> str;
	int index = 0;
	
	while (str[index] != 'E') index++;
	string num = str.substr(1, index-1);
	int times = stoi(str.substr(index+1));
	
	if(str[0] == '-') cout << '-';
	if(times < 0) {
		cout << "0.";
		for(int i = 0; i < abs(times)-1; i++)
			cout << "0";
		for(int i = 0; i < num.length(); i++)
			if(num[i] != '.') cout << num[i];
	}else{
		if(num.length()-2 <= abs(times)) {
			for(int i = 0; i < num.length(); i++)
				if(num[i] != '.') cout << num[i];
			if(num.length()-2 < abs(times))
				for(int i = 0; i < abs(times)-num.length()+2; i++)
					cout << "0";
		}else{
			cout << num[0];
			index = 2;
			for(int i = 0; i < abs(times); i++) {
				cout << num[index];
				index++;
			}
			cout << '.';
			for(int i = index; i < num.length(); i++)
				cout << num[i];
		}
	}	
	return 0;
} 
