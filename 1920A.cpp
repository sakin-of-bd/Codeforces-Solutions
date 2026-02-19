#include<bits/stdc++.h>
#include<iostream>
typedef long long ll;
#define fs(i,n) for(int i=0;i<n;i++)
#define fb(i,n) for(int i=n;i>=0;i--)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      vector<vector<ll>> v(n,vector<ll>(2,0));
      fs(i,n)
         fs(j,2)
           cin>>v[i][j];
       
       ll l=0,r=INT_MAX;
       unordered_map<ll,ll>mp;
       fs(i,n)
       {
         if(v[i][0]==1)
         {
            l=max(l, v[i][1]);
         }
         else if(v[i][0]==2)
         {
            r=min(r, v[i][1]);
         }
         else
         {
            mp[v[i][1]]++;
         }

       }
       ll count=0;
       for(auto i:mp)
       {
         if(i.first>=l && i.first<=r)
         {
            count++;
         }
       }
       ll ans=r-l+1-count;

       if(r<l || ans<0)
       {
        cout<<0<<endl;
        continue;
       }
       cout<<ans<<endl;
    }
}