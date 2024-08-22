//submitted by: Md. Abir Rahman
//Date:30-03-2024
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
//   ios_base::sync_with_stdio(0);
//   cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    if(n==k)
    {
        for(int i=0;i<n;i++)
        {
            cout<<1<<" ";
        }
        cout<<endl;
    } 
    else
    {
        if(k==1)
        {
            cout<<69420<<" ";
            for(int i=1;i<n;i++)
            {
                cout<<42<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
  }
    
}