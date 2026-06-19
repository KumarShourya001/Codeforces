#include <bits/stdc++.h>
using namespace std;

int ai_dev(int n, int x, int y, int z) {
  int eq1 = (n + (x + y) - 1) / (x + y);
  int num = n - x * z;
  int den = x + 10 * y;

  int eq2 = (num + den - 1) / den + z;
  return eq1 > eq2 ? eq2 : eq1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    long long n, x, y, z;
    cin >> n >> x >> y >> z;

    int ans = ai_dev(n, x, y, z);

    cout << ans << "\n";
  }
  return 0;
}