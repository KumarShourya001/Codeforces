#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> solve(int n, vector<int> &a) {
  int best = -1;
  int l = -1;
  int r = -1;
  vector<int> p;
  for (int i = 0; i < n; i++)
    if (a[i] == 1)
      p.push_back(i);
  if (p.size() == 0) {
    int lo = -1;
    int hi = -1;
    for (int i = 0; i < n; i++) {
      if (a[i] == -1) {
        if (lo == -1)
          lo = i;
        hi = i;
      }
    }
    if (lo != -1) {
      l = lo;
      r = hi;
    }
  } else {
    l = p[0];
    r = p[0];
    best = 1;
    for (int i = 0; i + 1 < p.size(); i++) {
      int len = p[i + 1] - p[i] + 1;
      if (len > best) {
        best = len;
        l = p[i];
        r = p[i + 1];
      }
    }
    for (int i = 0; i < p[0]; i++) {
      if (a[i] == -1) {
        int len = p[0] - i + 1;
        if (len > best) {
          best = len;
          l = i;
          r = p[0];
        }
        break;
      }
    }
    for (int i = n - 1; i > p[p.size() - 1]; i--) {
      if (a[i] == -1) {
        int len = i - p[p.size() - 1] + 1;
        if (len > best) {
          best = len;
          l = p[p.size() - 1];
          r = i;
        }
        break;
      }
    }
  }
  vector<int> ans(n, 0);
  for (int i = 0; i < n; i++) {
    if (a[i] == 1)
      ans[i] = 1;
  }
  if (l != -1) {
    ans[l] = 1;
    ans[r] = 1;
    for (int i = l + 1; i < r; i++)
      ans[i] = 0;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    vector<int> res = solve(n, a);
    for (int i = 0; i < n; i++)
      cout << res[i] << " ";
    cout << "\n";
  }
  return 0;
}