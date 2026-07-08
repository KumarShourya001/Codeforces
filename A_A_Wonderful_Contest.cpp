#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> d(n);
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            d[i] = 100 / a;
        }
        sort(d.begin(), d.end());
        long long reach = 0;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (d[i] > reach + 1) { ok = false; break; }
            reach += 100;
        }
        cout << (ok ? "Yes" : "No") << "\n";
    }
    return 0;
}