#include <bits/stdc++.h>
using namespace std;

string solve(string &s) {
  int n = s.size();
  int zeros = count(s.begin(), s.end(), '0');
  int ones = s.size() - zeros;
  return min(zeros, ones) % 2 ? "DA" : "NET";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    cout << solve(s) << "\n";
  }
  return 0;
}