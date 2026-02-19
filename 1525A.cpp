// @abir rahman sakin
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int tt;
       cin>>tt;
       vector<int>v(tt);
       int sum=0;
       for(int i=0;i<tt;i++)
       {
        cin>>v[i];
        sum+=abs(v[i]);
       }
       cout<<sum<<endl;
    }
}