#include <bits/stdc++.h>
using namespace std;

bool eqn(long long a, long long b, long long c, long long x) {
  __int128 val = (__int128)a * x * x + (__int128)b * x + c;
  return val < 0;
}
long long smallestPos(long long a, long long b, long long c) {
  long long lo = 1;
  long long hi = 500000000LL;
  long long ans = 0;
  while (lo <= hi) {
    long long mid = lo + (hi - lo) / 2;
    if (eqn(a, b, c, mid) == false) {
      hi = mid - 1;
    } else {
      ans = mid;
      lo = mid + 1;
    }
  }
  return ans + 1;
}

long long solve(vector<long long> &s, int n, long long c) {
  long long sum = 0, sq = 0;
  for (int i = 0; i < n; i++) {
    sum += s[i];
    sq += s[i] * s[i];
  }
  long long ans = smallestPos(4 * n, 4 * sum, sq - c);
  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    long long c;
    cin >> n >> c;
    vector<long long> s(n);
    for (int i = 0; i < n; i++)
      cin >> s[i];
    cout << solve(s, n, c) << "\n";
  }
  return 0;
}