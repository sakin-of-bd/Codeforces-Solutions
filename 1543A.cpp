#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll x=abs(a-b);
        cout<<x<<" ";
        if(x==0)
        {
          cout<<0<<'\n';
        }
        else
        {
            cout<<min(a%x,x-a%x)<<'\n';
        }
    }
}