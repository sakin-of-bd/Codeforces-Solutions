#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl '\n'
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int tt;
       cin>>tt;
       vector<int>v(tt);
       for(int i=0;i<tt;i++)
       {
         cin>>v[i];
       }
       int ans=v[0];
       for(int i=1;i<tt;i++)
       {
          ans&=v[i];
       }
       cout<<ans<<endl;
    }
}
