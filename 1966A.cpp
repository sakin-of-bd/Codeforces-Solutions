#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int v[n];
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        int flag=0;
        for(auto i:mp)
        {
            if(i.second>=k)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<k-1<<endl;
        }
        

    }
}