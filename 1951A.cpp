#include<bits/stdc++.h>
#define fi1(i,n) for(int i=0;i<n;i++)
#define fi2(i,n) for(int i=1;i<=n;i++)
#define fd1(i,n) for(int i=n-1;i>=0;i--)
#define fd2(i,n) for(int i=n;i>=1;i--)
#define endl '\n'
#define int long long
using namespace std;
int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      string v;
      cin>>v;
      int count=0,adj=0;
      for(int i=0;i<n;i++)
      {
        if(v[i]=='1')
        {
            count++;
        }
      }
      for(int i=0;i<n;i++)
      {
        if(v[i]=='1' && v[i+1]=='1')
        {
            adj++;
            i++;
        } 
      }
      if(count%2!=0) 
      { 
        cout << "NO" << endl; 
      } 
      else if(adj==1 && count==2) 
      { 
        cout<<"NO"<<endl; 
      } 
      else 
      { 
        cout<<"YES"<<endl; 
      } 
  }
    
}