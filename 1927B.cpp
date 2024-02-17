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
        unordered_map<char,int>mp;
        for(char ch='a';ch<='z';ch++)
        {
            mp.insert({ch,0});
        }
        string ans="";
        for(int i=0;i<n;i++)
        {
            for(auto x:mp)
            {
                if(x.second==v[i])
                {
                    ans+=x.first;
                    mp[x.first]++;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
}