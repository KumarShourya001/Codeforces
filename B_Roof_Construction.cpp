#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int s = 1 << (31 - __builtin_clz(n - 1));
        for (int i = s - 1; i >= 0; i--) cout << i << ' ';
        for (int i = s; i < n; i++) cout << i << ' ';
        cout << "\n";
    }
}