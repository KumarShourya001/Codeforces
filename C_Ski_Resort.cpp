#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

long long solve(vector<int> &a, int n, int k, long long q) {
  long long cnt = 0;
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] <= q)
      cnt++;
    else {
      if (cnt >= k) {
        long long d = cnt - k + 1;
        ans += d * (d + 1) / 2;
      }
      cnt = 0;
    }
  }
  if (cnt >= k) {
    long long d = cnt - k + 1;
    ans += d * (d + 1) / 2;
  }

  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    long long q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    cout << solve(a, n, k, q) << "\n";
  }
  return 0;
}