#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g;
    cin>>g;
    while(g--){
    int n;cin>>n;

    string t;
    cin >> t;

    string s = "?";

    s += t;
    int f[n + 1];
    int ans = 0;
    for (int i = n; i >= 1; i--)
    {
        if (s[i] == '1')
        {
            if (i + 3 <= n)
                f[i] = n + 1 - i + f[i + 3];
            else
                f[i] = n + 1 - i;
        }
        else
        {
            if (i + 1 <= n)
                f[i] = f[i + 1];
            else
                f[i] = 0;
        }
        ans += f[i];
    }
    cout << ans << endl;
}
}