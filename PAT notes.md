#### PAT notes

------

**专业词汇**

greedy algorithm	贪心算法

vertex/vertices	顶点

edges	边

**顺便背单词**

conceived	v.构思；设想

maintain	v. 保护，维护 adj. 被保持的

hence	adj. 因此，以后

queries	n. 问题；怀疑；问号（query的复数形式）v. [计] 查询（query的第三人称单数形式）；询问；质询

------

**STL相关**

```cpp
set<int> s;
s = {1,2,3,4,5};
auto it = s.lower_bound(3);
for(it; it != s.end(); it++) cout << *it;

ans:3,4,5
```



**Tips**

1. double类型乘的时候浮点数可能会缺失，在所有乘数前加（double）
2. str.append()，在字符串之后添加东西

