//kobe pro coder hobo????
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
        vector<int>even,odd;
        for(int i=0;i<tt;i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            {
             even.push_back(v[i]);
            }
            else
            {
                odd.push_back(v[i]);
            }
        }
        
        int ans=0;
        int z=1;
        for(int i=0;i<even.size();i++)
        {
            ans+=tt-z;
            z++;
        }
        int ans2=0;
        sort(odd.begin(),odd.end());
        for(int i=0;i<odd.size();i++)
        {
            for(int j=i+1;j<odd.size();j++)
            {
               if((__gcd(odd[i],odd[j]))>1)
               {
                ans2++;
               }
            }
        }
        cout<<ans+ans2<<endl;


    }
}