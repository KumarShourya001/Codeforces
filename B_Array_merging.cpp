#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a, vector<int> &b, int n) {
    map<int,int>mp1 ;
    map<int,int>mp2 ;
    for(int i=0;i<n;i++){
        int j=i;
        while( j<n && a[j]==a[i])j++;
        mp1[a[i]]=max(mp1[a[i]],j-i);
        i=j-1;
    }
    for(int i=0;i<n;i++){
        int j=i;
        while( j<n && b[j]==b[i])j++;
        mp2[b[i]]=max(mp2[b[i]],j-i);
        i=j-1;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,mp1[b[i]]+mp2[b[i]]);
        ans=max(ans,mp1[a[i]]+mp2[a[i]]);
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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        cout << solve(a, b, n) << "\n";
    }
    return 0;
}