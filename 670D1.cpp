#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int low=0,high=2000;
    int z=0;
    while(low<=high)
    {
       int cost=0;
       int mid=low+(high-low)/2;
       for(int i=0;i<n;i++)
       {
        cost = max(a[i]*mid-b[i],z);
       }
       if(cost<=k)
       {
        low=mid+1;
       }
       else
       {
        high=mid-1;
       }
    }
    cout<<high<<endl;
}