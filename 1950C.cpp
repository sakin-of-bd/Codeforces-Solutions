#include<bits/stdc++.h>
#include <ctime>
#define fi1(i,n) for(int i=0;i<n;i++)
#define fi2(i,n) for(int i=1;i<=n;i++)
#define fd1(i,n) for(int i=n-1;i>=0;i--)
#define fd2(i,n) for(int i=n;i>=1;i--)
#define endl '\n'
#define int long long
using namespace std;
int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
      string s;
      cin>>s;
      int hour= stoi(s.substr(0,2));
      string min= s.substr(3,2);
      string time=" AM";
      if(hour>11)
      {
        time=" PM";
      }
      if(hour==0 || hour==12)
      {
        cout<<12<<":"<<min<<time<<endl;
      }
      else
      {
        if(hour%12<10)
        {
            cout<<0<<hour%12<<":"<<min<<time<<endl;
        }
        else
        { 
            cout<<hour%12<<":"<<min<<time<<endl; 
        }
      }
  }
    
}