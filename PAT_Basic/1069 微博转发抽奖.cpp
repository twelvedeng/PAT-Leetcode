/*have one bug: when you find one winner once win,
ofcourse u next,but if the next also has won? 
question is how to design the loop*/ 
#include <iostream>
#include <set>
using namespace std;
int main() {
	int cnt, num, one;
	string name;
	set<string> flag;
	scanf("%d%d%d", &cnt, &num, &one);
	if(one > cnt) {
		printf("Keep going...\n");
		return 0;
	}
	for(int i = 1; i <= cnt; i++) {
		cin >> name;
		if(i == one || (i-one)%num == 0 ) {
			if(flag.find(name)==flag.end()) {
				flag.insert(name);
				cout << name << endl;
			}else{
				cin >> name;
				if(flag.find(name) == flag.end()) 
					cout << name << endl;
			}	
		}		
	}
	return 0;
} 
