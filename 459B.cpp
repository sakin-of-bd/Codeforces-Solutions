#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    int a[n];
    int mx=0,mn=1e9+10,cntmx=0,cntmn=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
       if(a[i]>mx)
       {
           mx=a[i];
       }
       if(a[i]<mn)
       {
        mn=a[i];
       }
    }
   
   
    for(int i=0;i<n;i++)
    {
        if(a[i]==mn)
        {
            cntmn++;
        }
        if(a[i]==mx)
        {
            cntmx++;
        }
    }

    cout<<mx-mn<<" ";
    if(mx-mn==0)
    {
        cout<<(n*(n-1))/2<<endl;
    }
    else
    {
        cout<<cntmx*cntmn<<endl;
    }
}