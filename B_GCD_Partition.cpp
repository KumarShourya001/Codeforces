#include <bits/stdc++.h>
using namespace std;

long long solve(int n, vector<long long> &a) {
    long long tot=0;
    for(int i=0;i<n;i++)tot+=a[i];
    long long mx=0;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(tot-sum<=0)continue;
        long long gd=gcd(sum,(tot-sum));
        
        mx=max(mx,gd);
    }
    return mx;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << solve(n, a) << "\n";
    }
    return 0;
}