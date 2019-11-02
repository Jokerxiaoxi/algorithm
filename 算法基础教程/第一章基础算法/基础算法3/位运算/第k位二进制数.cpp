#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    for(int k=0;k<4;k++)cout<<(n>>k);
    return 0;
}