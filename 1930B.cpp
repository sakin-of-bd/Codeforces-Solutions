#include<bits/stdc++.h>
#define fi1(i,n) for(int i=0;i<n;i++)
#define fi2(i,n) for(int i=1;i<=n;i++)
#define fd1(i,n) for(int i=n-1;i>=0;i--)
#define fd2(i,n) for(int i=n;i>=1;i--)
#define endl '\n'
typedef long long ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    int i = 1, j = n, c = 1;
    while (c <= n)
    {
        if(c&1)
        {
            cout << i << " ";
            i += 1;
        }
        else
        {
            cout << j << " ";
            j -= 1;
        }
        
        c += 1;
    }
    cout << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
} 

// int n;
//     cin>>n;
//     int N=n;
//     for (int ind=1; ind<=n; ind++)
//     {
//         if (ind%2)
//             cout<<ind/2+1<<" ";
//         else
//         {
//             cout<<N<<" ";
//             N--;
//         }
//     }
// cout<<"\n";