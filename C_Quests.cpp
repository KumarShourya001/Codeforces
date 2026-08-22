#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

long long solve(vector<int> &a, vector<int> &b, int n, int k) {
  
    long long sum=0;
    int mx=INT_MIN;
    long long best=0;
    for(int i=0;i<n && i<k ;i++){
        sum+=a[i];
        mx=max(mx,b[i]);
        best=max(best,sum+1LL*(k-i-1)*mx);
       
    }
    
    return best;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        cout << solve(a, b, n, k) << "\n";
    }
    return 0;
}