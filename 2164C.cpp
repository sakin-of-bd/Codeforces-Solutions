//@sakin_of_bd
//"ever tried, ever failed,
// no matter,
// try again. fail again. fail better......"
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve()
{
    int n, m;
    cin >> n >> m;
    multiset<ll> sw;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        sw.insert(a);
    }
    vector<pair<ll, ll>> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i].first;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a[i].second;
    }
    sort(a.begin(), a.end());
    ll ans = 0;

    for (int i = 0; i < m; i++)
    {
        if (a[i].second == 0)
            continue;
        auto it = sw.lower_bound(a[i].first);
        if (it == sw.end())
            break;
        ll x = *it;
        sw.erase(it);
        sw.insert(max(x, a[i].second));
        ans++;
    }

    for (int i = 0; i < m; i++)
    {
        if (a[i].second)
            continue;
        auto it = sw.lower_bound(a[i].first);
        if (it == sw.end())
            break;
        sw.erase(it);
        ans++;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    cin >> TC;
    while (TC--)
    {
        solve();
    }
}