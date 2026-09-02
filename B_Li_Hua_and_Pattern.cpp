#include <bits/stdc++.h>
using namespace std;

bool solve(vector<vector<int>>& a, int n, int k) {
    long long cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n/2; j++){
            if(a[i][j] != a[n-1-i][n-1-j]) cnt++;
        }
    }
    if(n % 2 == 1){
        int m = n/2;
        for(int i = 0; i < m; i++){
            if(a[i][m] != a[n-1-i][m]) cnt++;
        }
    }
    if(cnt > k) return false;
    if(n % 2 == 1) return true;
    return (k - cnt) % 2 == 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<vector<int>> a(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        bool ans = solve(a, n, k);

        cout << (ans ? "YES" : "NO") << '\n';
    }

    return 0;
}