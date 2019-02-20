#include <iostream>
#include <map>
using namespace std;
int main(){
	int n, adp = 0, adt = 0;
	string s;
	cin >> n;
	for(int i = 0; i < n; i++ ){
		cin >> s;
		map<char, int> m;
		for(int j = 0; j < s.length(); j++){
			m[s[j]]++;
			if(s[j] == 'P')adp = j;   //记录P的位置
			if(s[j] == 'T')adt = j;   //记录T的位置
		}
		if(m['P']==1 && m['T']==1 && m['A']!=0 && adt-adp!=1 
		&& adt>adp && m.size()==3 && adp*(adt-adp-1)==s.size()-adt-1)
		{
		//输出YES需要符合
		//1、P、T只出现一次，A随意
		//2、map只能有PAT三种关键字
		//3、P、T不能相邻且T的位置更后
		//4、P前面的A个数乘以PT中间的A个数==T之后的A个数
			cout << "YES" << endl;
		}else{
			cout << "NO"  << endl;
 		}
	}
	return 0;
}
			
