#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        int l = v[0], r = v[n - 1];

        int steps = (r - l) + min(abs(s - l), abs(s - r));
        cout << steps << '\n';
    }
}
