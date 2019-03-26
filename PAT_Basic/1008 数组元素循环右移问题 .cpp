#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, m, x;
  cin >> n >> m;
  vector<int> a(n);
 // if(m%n == 0){
 //   for(int i = 0; i < n; i++) cin >> a[i];
 // }else{
      m %= n;
      for(int i = 0; i < n; i++,m++) {
        cin >> a[m];
        if(m == n-1) m = -1;
      }
  //  }
  for(int i = 0; i < n-1; i++)cout << a[i] << " ";
  cout << a[n-1];
  return 0;
}
