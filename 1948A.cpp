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
     int p;
     cin>>p;
     if(p%2==1)
     {
       cout<<"NO"<<endl;
       continue;
     } 
     cout<<"YES"<<endl;
     char s='A';
     
     for(int i=0;i<p;i+=2)
     {
       cout<<s<<s;
       s++;
     }
     cout<<endl;

  }
    
}