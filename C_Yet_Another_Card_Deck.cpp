#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n, int q, vector<int>& a, vector<int>& t) {
    vector<int> pos(51, 0);
    for (int i = n - 1; i >= 0; i--) pos[a[i]] = i + 1;
    vector<int> ans(q);
    for (int i = 0; i < q; i++) {
        int c = t[i];
        int p = pos[c];
        ans[i] = p;
        for (int j = 1; j <= 50; j++) {
            if (pos[j] > 0 && pos[j] < p) pos[j]++;
        }
        pos[c] = 1;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> t(q);
    for (int i = 0; i < q; i++) cin >> t[i];
    vector<int> ans = solve(n, q, a, t);
    for (int i = 0; i < q; i++) cout << ans[i] << " ";
    cout << "\n";
    return 0;
}