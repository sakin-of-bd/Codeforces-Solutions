#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()>10)
        {
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
    
}


