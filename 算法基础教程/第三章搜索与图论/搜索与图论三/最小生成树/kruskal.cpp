#include<iostream>
#include<algorithm>

using namespace std;

const int N=2E5+10;
int n,m;
int p[N];
struct Edge
{
    int a,b,w;
    
    bool operator<(const Edge &W)const
    {
        return w<W.w;
    }
}edgs[N];

int find(int x)
{
    if(p[x]!=x)p[x]=find(p[x]);
    return p[x];
}
int main()
{
    scanf("%d%d",&n,&m);
    
    for(int i=0;i<m;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        edgs[i]={a,b,w};
    }
    sort(edgs,edgs+m);
    for(int i=1;i<=n;i++)p[i]=i;
    int res=0,cnt=0;
    for(int i=0;i<m;i++)
    {
        int a=edgs[i].a,b=edgs[i].b,w=edgs[i].w;
        a=find(a),b=find(b);
        if(a!=b)
        {
            p[a]=b;
            res+=w;
            cnt++;
        }
    }
    if(cnt<n-1)puts("impossible");
    else printf("%d\n",res);
    return 0;
}