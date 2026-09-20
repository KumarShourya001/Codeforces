#include <bits/stdc++.h>
#include <functional>
#include <utility>
#include <vector>
using namespace std;

long long solve(int n, int m, vector<vector<int>>& c) {
    long long ans = 0;
    for(int i=0;i<m;i++){
        vector<long long>col;
        for(int j=0;j<n;j++){
            col.push_back(c[j][i]);
        }
        sort(col.begin(),col.end(),greater<>());
        long long val=0;
        for(int k=0;k<col.size();k++){
            long long pos=n-k-1;
            long long neg=k;
            val+=col[k]*pos -col[k]*neg;
        }
        ans+=val;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> c(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) cin >> c[i][j];
        cout << solve(n, m, c) << "\n";
    }
    return 0;
}