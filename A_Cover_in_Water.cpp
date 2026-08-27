#include <bits/stdc++.h>
using namespace std;

int solve(string &s, int n) {
    bool big = false;
    int total = 0;
    int i = 0;
    while (i < n) {
        if (s[i] == '#') { i++; continue; }
        int j = i;
        while (j < n && s[j] == '.') j++;
        int len = j - i;
        if (len >= 3) big = true;
        total += len;
        i = j;
    }
    if (total == 0) return 0;
    if (big) return 2;
    return total;
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