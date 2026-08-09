#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long solve(string &s, int n) {
    long long ans = 1;
    for (int strt = 0; strt < 2 && strt < n; strt++) {
        int j0 = -1;
        int u = 0;
        bool ok = true;
        int j = 0;
        for (int i = strt; i < n; i += 2, j++) {
            if (s[i] == '?') continue;
            int v = s[i] - '0';
            if (j0 == -1) {
                j0 = j;
                u = v;
            } else {
                int expect = ((j - j0) % 2 == 0) ? u : 1 - u;
                if (v != expect) ok = false;
            }
        }
        if (!ok) return 0;
        if (j0 == -1) ans = ans * 2 % MOD;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << solve(s, n) << "\n";
    }
    return 0;
}