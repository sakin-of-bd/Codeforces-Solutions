#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int>& a, vector<int>& b, int k) {
    vector<bool> present(k + 1, false);

    for (int num : a) {
        present[num] = true;
    }

    for (int num : b) {
        present[num] = true;
    }

    for (int i = 1; i <= k; ++i) {
        if (!present[i])
            return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        if (isPossible(a, b, k))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
