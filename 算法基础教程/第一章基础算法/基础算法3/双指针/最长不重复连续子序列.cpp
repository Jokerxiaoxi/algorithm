#include<iostream>
using namespace std;
const int N=1e5+10;
int a[N],s[N];
int main()
{
    int n,result=0;
    cin>>n;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0,j=0;i<n;i++)
    {
        s[a[i]]++;
        while(s[a[i]]>1)
        {
            s[a[j]]--;
            j++;
        }
        result=max(result,i-j+1);
    }
    cout<<result;
    return 0;
}