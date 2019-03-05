

#### 一些以前不了解的知识点（及常用函数）

***



- 做简单判断的时候可以把if代码块改成三目运算符“ 判断式? 为真时执行  :  为假时执行”。

- substr（）用于截取某个字符串中的子串，比如

   > string s1 = s.substr(4);	//从s[4]一直到s结束
   >
   > string s2 = s.substr(5, 3);	//从s[5]开始截取三个字符

- 不从键盘端输入的变量最好初始化一下。

- map键值对，每个键只出现一次（同一关键字），如map<string, int> m, 此时m.size()是关键字的个数。

- cmp()和排序函数sort()同时使用，sort默认从小到大排序，cmp定义排序方式。比如

   > bool cmp(int a, int b) {
   >
   > ​	return a > b;	//从小到大排序，注意cmp函数的返回类型
   >
   > 
   >
   > sort(v.begin(),  v.end(),  cmp); 	//与sort合用给vector v排序，begin()为数组头，end()为尾
   >
   > sort(a,  a + n,  cmp);		//给数组元素排序，a表示数组a的首地址，a + n为第n个元素

- 如果要定义很大数组的时候最好在main函数外面进行定义（因为作为局部变量储存在堆栈段，太大会导致栈溢出结果...可恶的段错误。（同时函数执行完毕的时候它的局部变量空间会被释放，无法再使用它的值。

- <u>**判断是否素数**</u>

   ```c++
   //n = 1或n太大的时候不要用
   bool isprime(int a) {
       for (int i = 2; i * i <= a; i++)
           if (a % i == 0) return false;
       return true;
   }
   
   //啥时候都能用
   bool isprime(int n) {
       if (n <= 1) return false;
       int m = floor(sqrt(n) + 0.5);	//floor取整避免浮点误差
       for (int i = 2; i <= m; i++)
           if (n % i == 0) return false;
       return true;
   }
   ```

- C++万能头文件：#include<bits/stdc++.h>

- 能不用数组就不用数组，输入不知道什么时候结束（不知道有多少个数将会给入）的时候用while(cin >> m)完全ok。将数组清零：memset(a, 0, sizeof(a));（头文件string>)

- 超过int范围的时候用long 或者long long，输入端分别是%ld和%lld

- C++要用C的头文件时候加上一个c，比如ctype到cctype

- 输出%2d ：两位整数（宽度不足空格补； 输出%02d ：两位整数（宽度不足用0补。

- 头文件cctype包含的测试字符函数：

  > isalpha(c)	//判断字符c是否为字母字符,包括大小写
  >
  > isdigit(c)	//判断字符c是否为数字字符
  >
  > islower	//小写字母
  >
  > isupper	//大写字母
  >
  > isblank	//space&\t
  >
  > isalnum	//字母大小写&数字
  >
  > isprint	//是否为可打印字符
  >
  > tolower	//大写变小写 ==（c = c + 32)
  >
  > toupper	//小写变大写
  >
  > 还要补充

- math头文件：abs()       //绝对值函数，

- 需要四舍五入的情况就int(x + 0.5);  floor()函数返回不超过x的最大整数。

- 关于动态数组vector v

  > v.size()	//读取大小
  >
  > v.push_back()	//向尾部添加元素
  >
  > v.pop_back()	//拿出v数组最后一个元素
  >
  > v.front()	//如果要输出v的第一个元素不能用v[0]或者v.begin()
  >
  > v.resize()	//改变大小

- getline(cin, s);      //输入一整行字符串，以\n为标志结束。

- auto迭代器用来遍历动态的容器

- algorithm头文件里常用函数：

  > max	//返回较大的数
  >
  > min	//返回较小的数
  >
  > swap	//交换
  >
  > sort	//排序

- continue跳回for循环开始（直接进入下一轮循环）， break直接跳出循环。

- 设计递归程序的重点在于给下级安排工作。

- 变量名前加&得到的是该变量的地址。

- 排序传参建议用引用（&变量），速度会变快



#### 一些thinking

***



- <u>即时处理</u>：我最开始喜欢把键盘端输入的数都放起来（比如用数组），然后再去做核心计算。这样不仅增加了空间复杂度，还浪费内存（因为要开辅助空间）。即时处理的思想是，在一组数据互相不需要进行计算或者排序的时候，可以直接在输入的同时做判断，这样输入和计算可以共用一个for循环，同理，计算与输出有时也可以合并。

- <u>用flag之类做标记</u>：常见用法类似于最后做输出时每个数直接需要one space，但是最后一个数不要space的时候（如下，要输出一个vector里面的数，初始flag = 0

   ```c++
   int flag = 0;
   for(int i = 0; i < v.size(); i++){
   		if(arr[v[i]]!= 1){
   			if(flag == 1)cout << " ";
   			cout << v[i];
   			flag = 1;
   		}
   	}
   ```

- <u>keep it simple and stupid.</u>:能不复杂化就不要复杂化，比如18年12月那个1093那个题，ascii码可以直接做数组下标，所以用数组就可以做哈希表的题目，我一直在用map搞鼓，最后死于对map的不熟悉上。

- <u>hashing散列：</u>

   > 以关键字key为自变量，通过一个确定的函数n(散列函数)，计算出对应函数值h(key)，作为数据对象存储地址。
   >
   > 不同关键字可能同时映射同一地址，这时候要尽量避免冲突。

- 



#### 考试需要注意的

***



- 数学类的题目不要慌张，一定要看懂题目给出的逻辑关系再去敲代码，不然可能一开始思路就是不正确的，怎么实现也没有用。
- 理清思路超级无敌重要！！实在觉得自己的理解和解法没问题但AC不了就先试下一个题，但是前一个题一定要做好注释让自己待会回头看的时候能迅速进入。
- 尽量缩小变量定义的范围（比如在for里定义循环变量
- 浮点运算易产生误差，进行浮点数比较时要考虑误差（一般通过四舍五入避免浮点误差
- 



#### 比较少见的题目类型（堆栈之类）

***



1009 说反话（堆栈

给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

```c++
#include<iostream>
#include<stack>
using namespace std;
int main() {
	stack<string> s;	//创建一个空栈
	string a;
	while(cin >> a) s.push(a);		//将给的字符串一个一个压栈
	cout << s.top();	//使栈顶元素出栈（第一次栈顶元素为输入的最后一个
	s.pop();	//移除该栈顶元素
	while(!s.empty()) {		//当栈不为空时
		cout << " " << s.top();
		s.pop();
	}
	return 0;
}
```

