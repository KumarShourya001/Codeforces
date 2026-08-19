#include <bits/stdc++.h>
using namespace std;
int longCommSubstr(string& s1, string& s2) {
    int m = s1.length();
    int n = s2.length();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    int res = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                res = max(res, dp[i][j]);
            } else {
                dp[i][j] = 0;
            }
        }
    }
    return res;
}

int solve(string &a, string &b) {
    
    int n=a.size();
    int m=b.size();
    int ans=longCommSubstr(a, b);
    ans=m+n-2*ans;
    return ans;
  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << solve(a, b) << "\n";
    }
    return 0;
}