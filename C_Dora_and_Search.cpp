#include <bits/stdc++.h>
using namespace std;

pair<int, int> solve(int n, vector<int> &a) {
  pair<int, int> ans = {-1, -1};
  int hi = n;
  int lo = 1;
  int i = 0;
  int j = n - 1;
  while (i < j) {
    if (a[i] < hi && a[i] > lo && a[j] > lo && a[j] < hi) {
      ans.first = i + 1;
      ans.second = j + 1;
      return ans;
    }
    if (a[j] == lo) {
      lo++;
      j--;
    } else if (a[i] == lo) {
      i++;
      lo++;
    } else if (a[i] == hi) {
      hi--;
      i++;
    } else if (a[j] == hi) {
      hi--;
      j--;
    } else {
        i++;
        j--;
    }
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
    pair<int, int> ans = solve(n, a);
    if (ans.first == -1)
      cout << -1 << "\n";
    else
      cout << ans.first << " " << ans.second << "\n";
  }
  return 0;
}