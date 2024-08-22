#include <iostream>
using namespace std;
#define int long long
int32_t main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin>>s;

        int a=0,x=0;

        for(int i=0;i<s.size();i++) 
        {
            if(s[i]=='1') 
            {
                x++;
            } 
            else            
            {
                if(x!=0)
                {
                  a+=(x+1);
                }
            }
        }

        cout<<a<<endl;
    }

    return 0;
}