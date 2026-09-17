#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>& a) {
    if(n==1)return 0;
    int ans = 0;
    int k=n-2;
    int ele=a[n-1];
    int inc=1;
    while(k>=0 && a[k]==ele){
        k--;
        inc++;
    }
    while(  k>=0){
        if(a[k]==ele){
            k--;
            inc++;
            continue;
        }
        ans++;
        k-=inc;
        inc=inc*2;
    }
    return ans;
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
        cout << solve(n, a) << "\n";
    }
    return 0;
}