206 （创建为啥不用new还要用malloc？）

**测试数据**

- 有尾巴不反转
- 地址取到上下界



创建一个新的头结点指向现在的头结点确实好用，第一个比较好记录，也更清楚。

我之前吧以为直接这样就可以:arrow_down:

```c++
ListNode *p;
p->next = head;
```

结果并不可以...需要一个新结点

就像学链表插入操作的时候，要向系统申请一个新的...

但我记得直接new就可以啊啊啊啊啊

但是指针结构我还有点晕晕的so

？？？突然想起来我是不是应该

```c++
typedef struct ListNode *Node;
Node p = new Node;
```

下回测试一下

反正目前最后我灰溜溜用了malloc开的空间

```c++
ListNode *p = (ListNode*)malloc(sizeof(ListNode));
```

小邓有时间还要好好搞一下指针这个东西嘤嘤嘤

