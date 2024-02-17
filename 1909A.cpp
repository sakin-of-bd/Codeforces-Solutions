#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int x;
    cin>>x;
    vector<long long>v1,v2;
    for(int i=0;i<x;i++)
    {
        long long a,b;
        cin>>a>>b;
        v1.push_back(a);
        v2.push_back(b);

    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int ans=0;
    if(v1[0]<0 && v1[x-1]>0)
    {
        if(v2[0]<0 && v2[x-1]>0)
        {
            ans=1;
        }
    }
    if(ans==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }

}