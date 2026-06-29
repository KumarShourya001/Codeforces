#include <bits/stdc++.h>
#include <iterator>
#include <vector>
using namespace std;

string picky(vector<int> a) {
  int temp = a[0];
  int n = a.size();
  int k = (n + 1) / 2 - 1;
  int cnt=0;
  for(int i=1;i<n;i++){
    if(abs(a[0])>abs(a[i]))cnt++;

  }
  int f=n-1-cnt;
  if(cnt<=k || k<=f )return "YES";
  return "NO";
  
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    string ans=picky(a);
    cout<<ans<<endl;
  }
  return 0;
}