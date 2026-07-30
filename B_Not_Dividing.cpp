#include <bits/stdc++.h>
using namespace std;

vector<long long> solve(int n, vector<long long>& a){
    for(int i=0;i<n;i++){
        if(a[i]==1)a[i]++;
    }
    for(int i=1;i<n;i++){
        if(a[i]%a[(i-1)]==0)a[(i)]++;
    }
    
    
    return a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<long long> ans = solve(n, a);
        for(int i = 0; i < n; i++){
            cout << ans[i] << " \n"[i == n-1];
        }
    }
    return 0;
}