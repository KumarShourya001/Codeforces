#include <bits/stdc++.h>
using namespace std;

long long solve(vector<int> &a, int n) {
    vector<long long> pre(n + 1, 0);
    for (int i = 0; i < n; i++) pre[i + 1] = pre[i] + a[i];
    long long best = 0;
    for (int k = 1; k <= n; k++) {
        if (n % k) continue;
        long long mx = LLONG_MIN, mn = LLONG_MAX;
        for (int i = 0; i + k <= n; i += k) {
            long long s = pre[i + k] - pre[i];
            mx = max(mx, s);
            mn = min(mn, s);
        }
        best = max(best, mx - mn);
    }
    return best;
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
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << solve(a, n) << "\n";
    }
    return 0;
}