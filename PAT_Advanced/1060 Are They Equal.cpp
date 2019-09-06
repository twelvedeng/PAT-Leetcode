#include <iostream>
#include <string>
using namespace std;
int n;
string deal(string str) {
	while(str.size() > 0 && str[0] == '0')
		str.erase(str.begin());	//str.begin()
	int e = 0, pos;
	pos = str.find(".");
	if(pos == string::npos)	e = str.size();
	else if(pos != 0) {
		e = pos;	//then judge n and str.size
		str.erase(str.find("."));
	} 
	else if(pos == 0){	//pos == 0
		str.erase(str.begin());
		if(str[0] != '0')	
			e = 0;
		else {
			while(str[pos] == '0') {
				e--;
				str.erase(pos, 1);	//erase the 0
			}
		}
	}
//	cout << "e=" <<e;
//	cout << "str="<<str;
//	if(str.find(".") != string::npos)
//		str.erase(str.find("."));
	string ans = "0.";
	if(n > str.size()){
		ans = ans + str;
		for (int i = 0; i < n-str.size(); i++)
			ans = ans + "0";
	}
	else
		ans = ans + str.substr(0, n); 		
	ans = ans +"*10^"+ to_string(e);
	return ans;
}
int main() {
	cin >> n;
	string a, b, ansa, ansb;
	cin >> a >> b;
	ansa = deal(a);
	ansb = deal(b);
	if(ansa == ansb)
		cout << "YES " << ansa << endl;
	else
		cout << "NO " << ansa << " "<< ansb << endl; 
	return 0;
}
