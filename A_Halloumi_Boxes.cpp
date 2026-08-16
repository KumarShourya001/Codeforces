#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        bool ok = true;
        if (k == 1) {
            for (int i = 1; i < n; i++)
                if (a[i] < a[i-1]) ok = false;
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}