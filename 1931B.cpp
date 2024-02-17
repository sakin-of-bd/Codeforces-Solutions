#include<bits/stdc++.h>
typedef long long ll;
#define fs(i,n) for(int i=0;i<n;i++)
#define fp(i,n) for(int i=n;i>=0;i--)
using namespace std;
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n; 
    vector<ll>v(n);
    
    for(auto &i:v)
    {
        cin>>i;
    }
    if(n==1)
    {
        cout<<"Yes"<<endl;
        return;
    }
    ll sum=0;
    for(auto i:v)
    {
        sum+=i;
    }
    ll req=sum/n;
    ll flag=0;
    ll excess = 0;

    for(ll i=0;i<n;i++);
    {
      if(v[i]>=req)
      {
        excess+=(v[i]-req);
      }
      else
      {
        ll required_amount=req-v[i];
        if(excess>=required_amount)
        {
            excess-=required_amount;
        }
        else
        {
            cout<<"No"<<endl;
            return;
        }
      }
    }
    cout<<"Yes"<<endl;

   }
   
}

