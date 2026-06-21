#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<long long> flip(vector<long long> &a, int n) {
  vector<long long> ops;
  int cnt = 0;
  for (int i = n - 1; i >= 0; i--) {
    bool curPositive = (a[i] > 0) == (cnt % 2 == 0);
    if (curPositive) {
      ops.push_back(i + 1);
      cnt++;
    }
  }
  return ops;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    vector<long long> ans = flip(a, n);
    cout << ans.size() << "\n";
    for (auto it : ans) cout << it << " ";
    cout << "\n";
  }
  return 0;
}