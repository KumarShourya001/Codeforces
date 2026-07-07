#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> cnt(n * n + 1, 0);
        for (int i = 0; i < n * n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }
        int mx = 0;
        for (int i = 1; i <= n * n; i++) mx = max(mx, cnt[i]);
        if (n == 1) {
            cout << "NO\n";
        } else {
            cout << (mx <= n * n - n ? "YES" : "NO") << "\n";
        }
    }
    return 0;
}