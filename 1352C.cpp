#include <bits/stdc++.h>
using namespace std;
 
void test() {
    long long n, k; cin >> n >> k;
    long long lo = 0, hi = 1e17, mid;
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (mid - (mid / n) < k) lo = mid + 1;
        else hi = mid - 1;
    }
    cout << lo << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++) test();
    return 0;
}