#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,positive=0,negative=0;
        cin>>x;
       vector<int>v(x);
       for(int i=0;i<x;i++)
       {
        cin>>v[i];
       }
       sort(v.begin(),v.end());
       for(int i=0;i<x;i++)
       {
        if(v[i]>=0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
       }
       if(positive==x)
       {
        cout<<v[x-1]<<endl;
       }
       else
       {
        cout<<v[0]<<endl;
       }
    }
}