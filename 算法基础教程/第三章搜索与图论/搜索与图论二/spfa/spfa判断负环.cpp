#include<iostream>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;


const int N=100010;

int n,m,idx;

int h[N],e[N],ne[N],w[N],dist[N],cnt[N];

bool st[N];

void add(int a,int b,int c)
{
    e[idx]=b,w[idx]=c,ne[idx]=h[a],h[a]=idx++;
}
bool  spfa()
{
    queue<int> q;
    for(int i=1;i<=n;i++)
    {
        st[i]=true;
        q.push(i);
    }
    while(q.size())
    {
        int t=q.front();
        q.pop();
        st[t]=false;
        for(int i=h[t];i!=-1;i=ne[i])
        {
            int j=e[i];
            if(dist[j]>dist[t]+w[i])
            {
                dist[j]=dist[t]+w[i];
                cnt[j]=cnt[t]+1;
                if (cnt[j]>=n)return true;
                if(!st[j])
                {
                    q.push(j);
                    st[j]=true;
                }
            }
        }
    }
    return false;
}
int main()
{
    scanf("%d%d",&n,&m);
    memset(h,-1,sizeof h);
    while(m--)
    {
        int a,b,c;
        scanf("%d%d%d", &a, &b, &c);
        add(a,b,c);
    }
    if(spfa()) puts("Yes");
    else puts("No");
//    for(int i=0;i<n;i++)cout<<dist[i]<<" "<<endl;
    return 0;

}