#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int>get_divisors(int n)
{
    vector<int>res;

    for(int i=1;i<n/i;i++)
    {
        res.push_back(i);
        if(i!=n/i)res.pop_back(n/i);
    }
    sort(res.begin(),res.end());
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        auto res=get_divisors(x);
        for(auto t:res)cout<<t<<" ";
        cout<<endl;
    }
    return 0;
}