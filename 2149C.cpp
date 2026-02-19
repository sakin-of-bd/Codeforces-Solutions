#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] <= n) {
                freq[a[i]]++;
           }
        }

        bool allPresent = true;
        for (int i = 0; i < k; i++) {
            if (freq[i] == 0) {
                allPresent = false;
                break;
            }
        }

        if (allPresent && (k == n || freq[k] == 0)) {
            cout << 0 << endl;  
        } 
        else if (!allPresent) {
            if (freq[k] == 0){
                cout << 1 << endl;
            }
            else{
                cout << freq[k] << endl;
            }
        } 
        else {
            cout << freq[k] << endl;
        }
    }

}
