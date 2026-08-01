#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long solve(vector<int>&a,int n){
    int m=2*n;
    vector<int>pos(n+1,0);
    vector<long long>dp(m+1,0);
    for(int i= 1;i<=m;i++){
        int v=a[i];
        dp[i]=dp[i-1]+1;
        if(pos[v]!=0){
            int p=pos[v];
            long long len=i-p+1;
            dp[i]=max(dp[i],dp[p-1]+len*len);
        }
        pos[v]=i;
    }
    return dp[m];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(2*n+1);
        for (int i = 1; i <= 2*n; i++) cin >> a[i];
        long long ans=solve(a,  n);
        cout<<ans<<endl;
    }
    return 0;
}