#include<bits/stdc++.h>
#define fi1(i,n) for(int i=0;i<n;i++)
#define fi2(i,n) for(int i=1;i<=n;i++)
#define fd1(i,n) for(int i=n-1;i>=0;i--)
#define fd2(i,n) for(int i=n;i>=1;i--)
#define endl '\n'
#define int long long
using namespace std;

void solve()
{
   int a;
   cin>>a;
   for(int i=0;i<a;i++)
   {
    int x=2;
    char one='#';
    char two='.';
    if(i%2==1)
    {
        one='.';
        two='#';
    }
    while(x--)
    {
      for(int j=0;j<a;j++)
      {
        int y=2;
        while(y--)
        {
            if(j%2==0)
            {
                cout<<one;
            }
            else
            {
                cout<<two;
            }
        }
      }
      cout<<endl;
    }

   }
}

int32_t main()
{
//   ios_base::sync_with_stdio(0);
//   cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
    
}