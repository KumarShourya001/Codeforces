#include <bits/stdc++.h>
#include <functional>
#include <vector>
using namespace std;

long long solve(int n, vector<int>& a, vector<int>& b, vector<int>& c) {
    long long ans = 0;
    vector<pair<int,int>> p;
    vector<pair<int,int>> q;
    vector<pair<int,int>> r;

    for (int i = 0; i < n; i++) {
        p.push_back({a[i], i});
        q.push_back({b[i], i});
        r.push_back({c[i], i});
    }
    sort(p.begin(), p.end(), greater<>());
    sort(q.begin(), q.end(), greater<>());
    sort(r.begin(), r.end(), greater<>());

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (q[j].second == p[i].second) continue;
            
            for (int k = 0; k < 3; k++) {
                if (r[k].second == q[j].second || r[k].second == p[i].second) continue;
                ans = max(ans, 1LL * p[i].first + 1LL * q[j].first + 1LL * r[k].first);
            }
        }
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
        cin >> n;
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) cin >> c[i];
        cout << solve(n, a, b, c) << "\n";
    }
    return 0;
}