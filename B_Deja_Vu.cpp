#include <bits/stdc++.h>
using namespace std;

vector<long long> solve(vector<long long> &a, vector<long long> &x, int n, int q) {
   long long prev=31;
   for(int i=0;i<q;i++){
    if(x[i]>=prev)continue;
    long long val=pow(2,x[i]);
    for(int j=0;j<n;j++){
        if(a[j]%val==0){
            a[j]+=(val/2);
        }
    }
    prev=x[i];
   }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n), x(q);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < q; i++) cin >> x[i];
        vector<long long> ans = solve(a, x, n, q);
        for (int i = 0; i < n; i++) cout << ans[i] << " \n"[i + 1 == n];
    }
    return 0;
}