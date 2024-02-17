#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        int k[s];
        for(int i=0;i<s;i++)
        {
            cin>>k[i];
        }
        sort(k,k+s);
        int x=k[0]+1;
        int sum=1;
        for(int i=1;i<s;i++)
        {
            sum*=k[i];
        }
        int y=sum*x;
        cout<<y<<endl;
    }
}