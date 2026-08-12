#include <bits/stdc++.h>
#include <vector>
using namespace std;

int solve(string &s, int n) {
    vector<int>pre(n+1,0);
    vector<int>suff(n+1,0);
    vector<int>mp(256,0);
    for(int i=1;i<=n;i++){
        if(mp[s[i-1]]==0){
            pre[i]=pre[i-1]+1;
        }
        else{
            pre[i]=pre[i-1];
        }
        mp[s[i-1]]++;
    }
    fill(mp.begin(),mp.end(),0);
  
    for(int i=n-1;i>=0;i--){
        if(mp[s[i]]==0){
            suff[i]=suff[i+1]+1;
        }
        else{
            suff[i]=suff[i+1];
        }
        mp[s[i]]++;
    }
    int ans=0;
    for(int i=0;i<=n;i++){
        ans=max(ans,pre[i]+suff[i]);
    }
    return  ans;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << solve(s, n) << "\n";
    }
    return 0;
}