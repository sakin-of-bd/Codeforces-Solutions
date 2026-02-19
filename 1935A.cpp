#include<bits/stdc++.h>
#include<algorithm>
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
   
      int a;
      cin>>a;
      string s;
      cin>>s;
      int k=s.length();
      int flaggg=0;
       for( int i=0;i<k/2;i++)
       {
        
        
        if(s[i]==s[k-1-i])
        {
            continue;
        }
        if(s[i]>s[k-1-i])
        {
            flaggg=1;
        }
        else
        {
        break;
        }
       }
       string kk=s;
       reverse(kk.begin(),kk.end());
       if(flaggg==0)
       {
        cout<<s<<endl;
       }
       else
       {
        cout<<kk+s<<endl;
       }
  } 
    
}