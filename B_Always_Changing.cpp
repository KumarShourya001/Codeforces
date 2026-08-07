#include <bits/stdc++.h>
using namespace std;

int solve(string &s, int n) {
  int fst = false;
  int zero = false;
  int d1 = 0;
  int d0 = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1')
      fst++;
    else
      zero++;
  }
  if (abs(zero - fst) >= 3)
    return -1;

  for (int i = 0; i < n; i++) {
    int f = s[i];
    int j = i;
    while (i + 1 < n && s[i + 1] == f)
      i++;
    int cnt = abs(j - i);
    if (f == '1') {
      d1 += cnt;
    } else {
      d0 += cnt;
    }
  }
  int gap = abs(d0 - d1);
  return d0 + d1 + max(0, gap - 1);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    cout << solve(s, n) << "\n";
  }
  return 0;
}