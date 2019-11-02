#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N=1e3;
const int V=1e3;
int v[N],w[N];
int f[N];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i]>>w[i];
    }
    for(int i=1;i<=n;i++)
        for(int j=m;j>=v[i];j--)
        {
            f[j]=max(f[j],f[j-v[i]]+w[i]);
        }
    cout<<f[m]<<endl;
    return 0;
}