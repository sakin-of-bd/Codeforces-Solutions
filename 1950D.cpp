#include<bits/stdc++.h>
#define fi1(i,n) for(int i=0;i<n;i++)
#define fi2(i,n) for(int i=1;i<=n;i++)
#define fd1(i,n) for(int i=n-1;i>=0;i--)
#define fd2(i,n) for(int i=n;i>=1;i--)
#define endl '\n'
#define int long long
using namespace std;

vector<int>res(1e5+10,0);

bool cheak(int n)
{
   while(n>0)
   {
      int z1=n%10;
     if(z1==0 || z1==1)
     {
      n=n/10;
     }
     else
     {
      return false;
     }
   }
   return true;
}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
     int t;
     cin>>t;
     vector<int>ans;
     res[0]=1,res[1]=1;
     for(int i=10;i<1e5+1;i++)
     {
      if(cheak(i==true))
      {
         res[i]=1;
         ans.push_back(i);
      }
     }

     for(int i=10;i<1e5+1;i++)
     {
      for(auto it:ans)
      {
         if(i%it==0)
         {
            res[i]=res[i]|res[i/it];
         }
      }
     }

  while(t--)
  {
     solve();
  }
    
}