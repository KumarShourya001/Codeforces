#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        long long total = 0;
        int mn = INT_MAX;
        for(int i = 0; i < n; i++){
            mn = min(mn, a[i]);
            total += mn;
        }
        cout << total << "\n";
    }
    return 0;
}