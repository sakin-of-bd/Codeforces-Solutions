#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       vector<int>v(n);
       for(int i=0;i<n;i++)
       {
         cin>>v[i];
       }
       int x=0;
       for(int i=0;i<n;i++)
       {
         if(v[i]==1)
         {
           x=i;
           break;
         }
       }
       int y=0;
       for(int i=n-1;i>=0;i--)
       {
         if(v[i]==1)
         {
           y=i;
           break;
         }
       }
       int count=0;
       for(int i=x;i<=y;i++)
       {
          if(v[i]==0)
          {
            count++;
          }
       }
       cout<<count<<endl;
    }
}