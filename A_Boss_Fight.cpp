#include <bits/stdc++.h>
#include <vector>
using namespace std;

int best = 0;



int solve(vector<int> &a, int n) {
   map<int,int>cnt;
   int sum=0;
   for(int i=0;i<n;i++){
    cnt[a[i]]++;
    sum+=a[i];
   }
   int f=0,val=0;
   for(auto&p :cnt){
    if(p.second>f){
        f=p.second;
        val=p.first;
    }
   }
   int o=n-f;
   if(f<=o+1)return  sum;
   return (sum-f*val)+(o+2)*val;
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
    for (int k = 0; k < n; k++)
      cin >> a[k];
    cout << solve(a, n) << "\n";
  }
  return 0;
}