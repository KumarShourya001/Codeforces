#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int p;
        cin >> p;

        int x = a[p-1];
        int L = 0, R = 0;
        for (int j = 0; j < p; j++)
            if (a[j] != x && (j == 0 || a[j-1] == x)) L++;
        for (int j = p-1; j < n; j++)
            if (a[j] != x && (j == p-1 || a[j-1] == x)) R++;

        cout << 2 * max(L, R) << "\n";
    }
    return 0;
}