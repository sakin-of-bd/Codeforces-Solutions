#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;  
    cin >> t;  
    while(t--) {
        int n; 
        cin >> n;

        vector<int> freq((1LL << 31) - 1); // To store frequency of elements
        int ans = 0;
        int d = (1LL << 31) - 1;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            int y = d ^ x;

            if (freq[x] == 0) {
                ans++;
                freq[y]++;
            } else {
                freq[x]--;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
