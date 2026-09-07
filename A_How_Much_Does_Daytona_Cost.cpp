#include <bits/stdc++.h>
using namespace std;

string solve(int n, int k, vector<int>& a){
    for(int i = 0; i < n; i++){
        if(a[i] == k) return "YES";
    }
    return "NO";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        cout << solve(n, k, a) << "\n";
    }
    return 0;
}