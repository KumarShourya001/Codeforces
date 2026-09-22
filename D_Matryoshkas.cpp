#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>& a) {
    map<int,int> mp;
    for (int i = 0; i < n; i++) mp[a[i]]++;
    int ans = 0;
    for (auto &[v, c] : mp) {
        int prev = 0;
        if (mp.count(v - 1)) prev = mp[v - 1];
        ans += max(0, c - prev);
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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << solve(n, a) << "\n";
    }
    return 0;
}