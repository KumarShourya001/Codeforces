#include <bits/stdc++.h>
using namespace std;

long long Soku(long long n, long long x1, long long x2, long long k) {
    long long raw = ((x2 - x1) % n + n) % n;
    long long d = min(raw, n - raw);
    if (n <= 3) return d;
    return d + k;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;

    long long ans = Soku(n, x1, x2, k);
    cout << ans << "\n";
  }
  return 0;
}