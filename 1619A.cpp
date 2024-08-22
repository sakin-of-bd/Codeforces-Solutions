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
  
  int t;
  cin>>t;
  while(t--)
  {
     string s,s1="",s2="";
     cin>>s;
     for(int i=0;i<s.size()/2;i++)
     {
       s1+=s[i];
     }
     for(int i=s.size()/2;i<s.size();i++)
     {
       s2+=s[i];
     }

     if(s1==s2)
     {
      cout<<"YES"<<endl;
     }
     else
     {
      cout<<"NO"<<endl;
     }

  }
    
}