#include <bits/stdc++.h>
using namespace std;

int solve(string &s, int n, char c) {
    vector<int> dist(n, 0);
    int last = -1;
    for (int i = 2*n - 1; i >= 0; i--) {
        if (s[i % n] == 'g') last = i;
        if (i < n) dist[i] = last - i;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == c) ans = max(ans, dist[i]);
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        cout << solve(s, n, c) << "\n";
    }
    return 0;
}