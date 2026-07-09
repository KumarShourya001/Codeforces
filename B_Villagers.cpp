#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<long long> g(n);
        for (int i = 0; i < n; i++) scanf("%lld", &g[i]);
        sort(g.begin(), g.end());

        long long ans;
        if (n % 2 == 0) {
            ans = 0;
            for (int i = 1; i < n; i += 2) ans += g[i];
        } else {
            vector<long long> pre(n + 1, 0);
            for (int i = 1; i < n; i += 2) pre[i + 1] = pre[i - 1] + g[i];
            vector<long long> suf(n + 2, 0);
            for (int i = n - 2; i >= 0; i -= 2) suf[i] = suf[i + 2] + g[i + 1];
            ans = LLONG_MAX;
            for (int k = 0; k < n; k += 2)
                ans = min(ans, pre[k] + g[k] + suf[k + 1]);
        }
        printf("%lld\n", ans);
    }
    return 0;
}