#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<long long>& a, vector<array<long long,3>>& queries){
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<array<long long,3>> queries(q);
        for(int i = 0; i < q; i++){
            cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
        }
        solve(n, a, queries);
    }
    return 0;
}