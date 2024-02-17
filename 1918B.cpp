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
        vector<pair<int,int>>a(n);
        for(auto &i : a)
        {
            cin>>i.first;
        }
        for(auto &i : a)
        {
            cin>>i.second;
        }
        sort(a.begin(),a.end());
        for(auto &i : a)
        {
            cout<<i.first<<" ";
        }
        cout<<endl;
        for(auto &i : a)
        {
            cout<<i.second<<" ";
        }
        cout<<endl;
        
        
    }
}