#include<iostream>
#include<cstring>

using namespace std;

const int N=210,INF=1e9;
const int M=20000;
int n,m,Q;
int d[N][N];
void floyd()
{
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}
int main()
{
    cin>>n>>m>>Q;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(i==j)d[i][j]=0;
            else d[i][j]=INF;
    while(m--)
    {
        int a,b,w;
        cin>>a>>b>>w;
        d[a][b]=min(w,d[a][b]);
    }
    floyd();
    while(Q--)
    {
        int a,b;
        cin>>a>>b;
        if(d[a][b]>INF/2)puts("impossible");
        else cout<<d[a][b]<<endl;
    }
    return 0;
}