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
        string s;
        cin>>s;
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
            x=i;
            break;
            }
        }
        for(int j=n-1;j>=0;j--)
        {
            if(s[j]=='B')
            {
            y=j;
            break;
            }
        }
        
        cout<<y-x+1<<endl;
    }
}