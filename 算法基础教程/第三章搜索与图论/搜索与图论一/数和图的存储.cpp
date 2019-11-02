#include<iostream>
#include<string.h>
using namespace std;
const int N=100010,M=N*2;
int m,n;
int h[N],e[M],ne[M],idx;
bool st[N];
int ans=N;
void add(int a,int b)
{
    e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}

int dfs(int u)
{
    st[u]=true;
    int sum=1,res=0;
    for(int i=h[u];i!=-1;i=ne[i])
    {
        int j=e[i];
        if(!st[j])
        {
            int s=dfs(j);
            dfs(j);
            sum+=s;
        }
    }
    res=max(res,n-sum);
    ans=min(ans,res);
    return sum+1;
}
int main()
{
    cin>>n;
    memset(h,-1,sizeof h);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a,b;
        add(a,b),add(b,a);
    }
    dfs(1);
    cout<<ans<<endl;
    return 0;
}