#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    set<int>s;
    for(int i=n;i>0;i--)
    {
       s.insert(a[i]);
       a[i]=s.size();
    }
    while(m--)
    {
        int x;
        cin>>x;
        cout<<a[x]<<endl;
    }

}