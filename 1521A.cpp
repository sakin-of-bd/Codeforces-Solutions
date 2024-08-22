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
     int a,b;
     cin>>a>>b;
     if(b==1)
     {
        cout<<"NO"<<endl;
        continue;
     }
     cout<<"YES"<<endl;
     int x=2*a*b;
     cout<<x-a<<" "<<a<<" "<<x<<endl; 
  }
    
}