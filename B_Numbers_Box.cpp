#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;


int solve(vector<vector<int>> &a, int n, int m) {
    int sum=0;
    bool zerr=false;
    int cnt=0;
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0)zerr=true;
            if(a[i][j]<0)cnt++;
            sum+=abs(a[i][j]);
            mn=min(mn,abs(a[i][j]));
        }   
    }
    if(cnt%2==0)return sum;
    else{
        if(zerr)return sum;
        else{
            return sum-2*abs(mn);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        cout << solve(a, n, m) << "\n";
    }
    return 0;
}