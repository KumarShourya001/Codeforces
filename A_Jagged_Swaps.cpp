#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int>& a) {
    return a[0] == 1;
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << (solve(a) ? "YES" : "NO") << '\n';
    }

    return 0;
}