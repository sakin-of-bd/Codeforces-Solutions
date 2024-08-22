//author: Abir Rahman Sakin
//Date: 16-04-2024

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int32_t main()
{
   string s;
   cin>>s;
   int len=s.size();
   int first=s[0]-'0';
   if(first==9)
   {
    s[0]='9';
   }
   else
   {
    if(first>4)
    {
       s[0]=((9-first)+'0');
    }
   }

   for(int i=1;i<len;i++)
   {
    int a=s[i]-'0';
    if(a<5 || a==0)
    {
        continue;
    }
    else
    {
        s[i]=((9-a)+'0');
    }
   }
   cout<<s;
}
