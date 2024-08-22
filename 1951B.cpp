#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f first
#define se second
#define mp make_pair
const ll mod = 1000000007;
const ll inf = 1e18;
bool s(vector<ll> &v)
{   ll k=v[0];
    for(ll i=1;i<v.size();i++)
    {
           if(k!=v[i])
           return false;
    }
    return true;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        k--;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        cin>>v[i];
        if(s(v))
        {
            cout<<n-1<<"\n";
            continue;
        }
        ll pos=0;
        ll maxi=v[0];
        for(ll i=1;i<n;i++)
        {
              if(v[i]>=maxi)
              {
                pos=i;
                maxi=v[i];
              }
        }
        ll ct=0;
        ll j=k;
        if(k<pos)
        {
             for(ll i=0;i<pos;i++)
            {      if(i!=k)
                   {
                    if(v[i]<=v[k])
                   {
                    ct++;
                   }
                   }
            } 
        }
        else if(k>pos)
        {
            swap(v[k],v[pos]);
            for(ll i=0;i<pos;i++)
            {
                  if(i!=j)
                   {
                    if(v[i]<=v[k])
                   {
                    ct++;
                   }
                   }
            }
        }
        else if(k==pos)
        {
            ct=n-1;
        }
        cout<<ct<<"\n";
    }
    return 0;
}