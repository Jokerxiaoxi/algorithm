/*给定一个长度为n的整数数列，以及一个整数k，请用快速选择算法求出数列的第k小的数是多少。

输入格式
第一行包含两个整数 n 和 k。

第二行包含 n 个整数（所有整数均在1~109范围内），表示整数数列。

输出格式
输出一个整数，表示数列的第k小数。

数据范围
1≤n≤100000,
1≤k≤n
输入样例：
5 3
2 4 1 5 3
输出样例：
3*/
#include<iostream>
using namespace std;
const int MAX=1e5+10;
void quick_sort(int q[],int l,int r)
{
    if(l>=r)return;
    int x=q[l + r >> 1],i=l-1,j=r+1;
    while(i<j)
    {
        do i++;while(q[i]<x);
        do j--;while(q[j]>x);
        if(i<j)swap(q[i],q[j]);
    }
    quick_sort(q,l,j);
    quick_sort(q,j+1,r);
}
int main ()
{
    int n,k;
    cin>>n>>k;
    int list[MAX];
    for (int i=0;i<n;i++) cin>>list[i];
    quick_sort(list,0,n-1);
    cout<<list[k-1];
//    for(int i=0;i<n;i++)cout<<" "<<list[i];
    return 0;
}