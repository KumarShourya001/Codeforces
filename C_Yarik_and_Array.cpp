#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a, int n) {
    int ans=a[0];
    int mx=a[0];
    for(int i=1;i<n;i++){
            if(ans<0){
                ans=0; 
            }
            if(((a[i] ^ a[i-1]) & 1) == 0){
                ans=a[i];
                mx=max(mx,ans);
            }
            else{
                ans+=a[i];
                mx=max(mx,ans);
            }
        }
        return mx;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << solve(a, n) << "\n";
    }
    return 0;
}