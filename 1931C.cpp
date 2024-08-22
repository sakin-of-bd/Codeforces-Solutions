/*******************************************************************************************
*                                আমাকে আমার মতো থাকতে দাও,                             * 
**                           আমি নিজেকে নিজের মতো গুছিয়ে নিয়েছি।                         **
***                           যেটা ছিলনা ছিলনা সেটা না পাওয়াই থাক,                         ***
****                                  সব পেলে নষ্ট জীবন।                                 **** 
*********************************************************************************************/

#include <bits/stdc++.h>
using namespace std;

void test() {
  int n; cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) cin >> a[i];

  int ans = n;
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if (a[i] == a[1]) cnt++;
    else break;
  }
  ans = min(ans, n - cnt);

  cnt = 0;
  for (int i = n; i > 0; i--) {
    if (a[i] == a[n]) cnt++;
    else break;
  }
  ans = min(ans, n - cnt);

  int l = 1, r = n;
  cnt = 0;
  while (l <= n && a[l] == a[1]) l++, cnt++;
  while (r > 0 && a[r] == a[1]) r--, cnt++;
  if (l <= r) ans = min(ans, n - cnt);

  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int t = 1; cin >> t;
  for (int i = 1; i <= t; i++) test();
  return 0;
}