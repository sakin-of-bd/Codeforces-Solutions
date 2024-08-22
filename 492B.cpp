#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    vector<int>v(a);
    for(int i=0;i<a;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int x=0;
    for(int i=0;i<v.size()-1;i++)
    {
        x=max(x,v[i+1]-v[i]);
    }
    double p=v[0];
    double y=(double)x/2;
    double ans=max(y,p);
    double q=b-v[a-1];
    ans=max(q,ans);
    cout<<fixed<<setprecision(9)<<ans<<endl;

}