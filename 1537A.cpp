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
           sum+=v[i];
        } 
        if(sum==tt)
        {
            cout<<0<<endl;
        }
        else if(sum<tt)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<sum-tt<<endl;
        }

    }
}