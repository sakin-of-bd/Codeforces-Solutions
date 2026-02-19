#include <bits/stdc++.h>
using namespace std;

void test() {
  int n; cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) cin >> a[i];
  vector<int> b;
  b.push_back(a.back());
  for (int i = n - 1; i > 0; i--) {
    if (a[i] <= b.back()) b.push_back(a[i]);
    else {
      int num = a[i];
      while (num) {
        b.push_back(num % 10);
        num /= 10;
      }
    }
  }
  reverse(b.begin(), b.end());
  for (int i = 1; i < b.size(); i++) {
    if (b[i - 1] > b[i]) {
      cout << "NO\n"; return;
    }
  }
  cout << "YES\n";
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int t = 1; cin >> t;
  for (int i = 1; i <= t; i++) test();
  return 0;
}