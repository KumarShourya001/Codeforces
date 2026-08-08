#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> solve(vector<int> &p, int n) {

  for (int i = 1; i+1 < n; i++) {
    if(p[i]>p[i-1]&&p[i]>p[i+1]){
        cout<<"YES"<<endl;
        return {i,i+1,i+2};
    }
  }
  cout << "NO" << endl;
  return {};
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
      cin >> p[i];
    vector<int> ans = solve(p, n);
    if (!ans.empty()) {
      for (auto it : ans)
        cout << it << " ";
      cout << "\n";
    }
  }
  return 0;
}