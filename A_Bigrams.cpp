#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int big = 0, two = 0;
        for (int i = 0; i < k; i++) {
            int c;
            cin >> c;
            if (c >= 3) big++;
            if (c >= 2) two++;
        }
        cout << ((big >= 1 || two >= 2) ? "YES" : "NO") << "\n";
    }
    return 0;
}