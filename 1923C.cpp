#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int c[300005];
int pref[300010],ss[300010];
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
        cin>>c[i];
        pref[i]=pref[i-1]+c[i];
        ss[i]=ss[i-1]+(c[i]==1?2:1);
    }
    while(b--)
    {
        int ll,rr;
        cin>>ll>>rr;
        if(ll==rr)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(pref[rr]-pref[ll-1] < ss[rr]-ss[ll-1])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
  }
}