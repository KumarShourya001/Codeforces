#include <bits/stdc++.h>
#include <numeric>
#include <unordered_set>
#include <vector>
using namespace std;

long long solve(int n, vector<long long>& a) {
    int ans=0;
    for(int i=1;i<=60;i++){
        unordered_set<long long>st;
        long long k=1LL<<i;
        for(int t=0;t<n;t++){
            st.insert(a[t]%k);
        }
        if(st.size()==2){
            return k;
        }

    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
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