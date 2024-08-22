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
     string a,b;
     cin>>a>>b;
     int count=0;
     for(int i=1;i<a.size()-1;i++)
     {
       if(a[i-1]=='.' && a[i]=='.' && a[i+1]=='.' && b[i]=='.' && b[i-1]=='x' && b[i+1]=='x')
       {
        count++;
       }
       else if(b[i-1]=='.' && b[i]=='.' && b[i+1]=='.' && a[i]=='.' && a[i-1]=='x' && a[i+1]=='x')
       {
        count++;
       }
     } 
     cout<<count<<endl;
  }
    
}