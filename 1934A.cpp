#include<bits/stdc++.h>
#define endl '\n'
typedef long long ll;
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  ll t;
  cin>>t;
  while(t--)
  {
     int tt;
      cin>>tt;
      vector<int>v(tt);
      for(int i=0;i<tt;i++)
      {
        cin>>v[i];
      }

    sort(v.begin(), v.end());

    int ans=0;
    ans+=abs(v[0]-v[tt-1]);
    ans+=abs(v[1]-v[tt-2]);
    cout<<(ans*2)<<endl;
  }
    
}