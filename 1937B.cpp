#include <bits/stdc++.h>
using namespace std;
#define dbg(a) cout << #a << " = " << a << endl

typedef long long ll;

const int MAX = 2e5 + 5;

void solve() {
    int n;
    string s[2];
    cin >> n;
    cin >> s[0] >> s[1];
    string t;
    t += s[0][0];
    int ans = 1;
    int idx = n - 1;
    for (int i = 1; i < n; i++) {
        if (s[0][i] <= s[1][i - 1]) {
            t += s[0][i];
        }
        else {
            idx = i - 1;
            t += s[1][i - 1];
            for (int j = i; j < n - 1; j++)
                t += s[1][j];
            break;
        }
    }
    t += s[1][n - 1];
    for (int i = idx; i >= 1; i--) {
        if (s[0][i] == s[1][i - 1]) ans++;
        else break;
    }

    cout << t << '\n';
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
