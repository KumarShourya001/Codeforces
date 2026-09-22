#include <bits/stdc++.h>
using namespace std;

vector<long long> solve(int n, int q, vector<long long>& a, vector<long long>& k) {
    vector<long long> pm(n), ps(n);
    long long mx = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        mx = max(mx, a[i]);
        sum += a[i];
        pm[i] = mx;
        ps[i] = sum;
    }
    vector<long long> ans(q);
    for (int i = 0; i < q; i++) {
        int idx = upper_bound(pm.begin(), pm.end(), k[i]) - pm.begin();
        ans[i] = (idx == 0 ? 0 : ps[idx - 1]);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n), k(q);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < q; i++) cin >> k[i];
        vector<long long> ans = solve(n, q, a, k);
        for (int i = 0; i < q; i++) cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}