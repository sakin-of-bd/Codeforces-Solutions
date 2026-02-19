#include<bits/stdc++.h>
#define fi1(i,n) for(int i=0;i<n;i++)
#define fi2(i,n) for(int i=1;i<=n;i++)
#define fd1(i,n) for(int i=n-1;i>=0;i--)
#define fd2(i,n) for(int i=n;i>=1;i--)
#define endl '\n'
#define int long long
using namespace std;
#include <iostream>
#include <vector>
using namespace std;
int32_t main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> p[i];
        }
        
        int friends = 0;
        for (int i = 0; i < n; ++i) 
        {
            if (p[p[i]-1]==i+1) 
            {
                friends++;
            }
        }
        cout<<(friends>0?2:3)<<endl;
    }

    return 0;
}
