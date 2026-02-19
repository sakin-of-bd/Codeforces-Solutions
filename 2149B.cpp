#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long ans = 0;
        for (int i = 1; i < n; i+=2) {
            ans = max(ans, abs(a[i] - a[i-1]));
        }

        cout << ans << "\n";
    }
    return 0;
}
