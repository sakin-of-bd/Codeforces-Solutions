#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        long long a[x],b[x];
        long long ans=0,ans1=0;
        for(int i=0;i<x;i++)
        {
            cin>>a[i];
            ans+=a[i];
        }
        for(int i=0;i<x;i++)
        {
            cin>>b[i];
            ans1+=b[i];
        }
        sort(a,a+x);
        sort(b,b+x);
        cout<<min(ans+x*b[0],ans1+x*a[0])<<endl;
        
    }
}