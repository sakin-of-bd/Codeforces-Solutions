#include <bits/stdc++.h>
using namespace std;

void test() {
    int n, k; cin >> n >> k;
    string a; cin >> a;
    int ans1 = 0, ans2 = 0;

    for (int i = 0; i < n; i++) 
    {
        if (a[i] == 'W') 
        continue;
        ans1++; i += k - 1;
    }
    for (int i = n - 1; i >= 0; i--) 
    {
        if (a[i] == 'W') 
        continue;
        ans2++; i -= k - 1;
    }

    cout << min(ans1, ans2) << endl;
}

int main() {
    int t = 1; cin >> t;
    while (t--) 
    test();
    return 0;
}