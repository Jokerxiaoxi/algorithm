/*
vector，变长数组，倍增的思想
size()返回元素个数
empty（）是否为空
clear()
front()
back()
push_back()
begin()/end()
支持比较运算，按字典序排序

pair<int int>
first第一个元素
second第二个元素
支持比较运算，以first为第一关键字，以second为第二关键字（字典序）

string字符串substr()截子串 c_str()返回头指针
size()/length()返回字符串长度
empty()
clear()

queue,队列，
size（）
empty（）
push()向队尾插入一个元素，
front()返回队头元素
back()返回队尾元素
pop()弹出队头元素

priority_queue优先队列（默认是大根堆）
push()插入元素
top()返回堆顶元素
pop()弹出堆顶元素

stack栈
size()
empty()
push()向堆顶插入一个元素
top()返回栈顶元素
pop()弹出栈顶元素

deque,双端队列
size()
empty()
clear()
front()
back()
push_back()/pop_back()
push_front()/pop_front()
begin()/end()
[]

set,map,multiset,multimap，基于平衡二叉树(红黑树)，动态维护有序序列
size()
empty()
clear()
begin()/end() ++ --

set/multiset
insert()
find()
count()
earse()O(k+logn)
(1)输入一个数
（2）输入一迭代器
lower_bound()返回大于等于x的最小数的迭代器
up_bound（）返回大于x的最小数的迭代器

map（）/multimap()
insert() 插入一个pair
erase（）参数是pair或迭代器
find()
[]=O(logn)
lower_bound()
up_bound（）

unorder_set,unorder_map,unorder_mulitiset，unorder_mulitimap哈希表
和上面类似O(1)
不支持lower_bound()up_bound（）,迭代器++--

bitset压位
bitset<10000>s;
~,&,I,^
>>,<<
++/!=
[]
count()返回多少个一
any（）判断是否至少有一个一
none（）判断是否全为0；
set（）把所有位置变成1；
set(k,v)把第K为变成V
reset()把所有变成0
flip（）等价于取反
flip（k）第k位取反


*/
//#include<string>
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
//#include<vector>
//#include<utility>
//#include<queue>
//#include<set>
#include<map>
using namespace std;
int main()
{
    /*
    vector<int> a;
    for(int i=0;i<10;i++)a.push_back(i);
    for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
    for(auto i=a.begin();i!=a.end();i++)cout<<*i<<" ";
    for(auto x:a)cout<<x<<" ";
    pair<int int>p;*/
    /*
    pair<int,string> p;
    p=make_pair(10,"asd");
    //p={20,"lalala"};
    */
   /*
   string a="yxc";
   a+="def";
   a+='c';
   cout<<a<<endl;
   cout<<a.substr(1,2)<<endl;
   printf("%s\n",a.c_str());
   */
    //下面是生成小根堆的方法
    /*
    priority_queue<int>a;
    a.push(-x);
    priority_queue<int,vector<int>,greater<int> >heap;
    */
}