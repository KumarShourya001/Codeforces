#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;




int solve(int n, int k, vector<int>& c) {
    map<int,vector<int>>mp;
    vector<int>vec(k+1,-1);
    for(int i=0;i<n;i++){
        if(mp.find(c[i])==mp.end()){
            mp[c[i]].push_back(i+1-0-1);
            vec[c[i]]=i+1;
            continue;
        }
        mp[c[i]].push_back(i+1-vec[c[i]]-1);
        vec[c[i]]=i+1;
    }
    for(int i=1;i<vec.size();i++){
        int idx=vec[i];
        mp[i].push_back(n-idx);
    }
    int ans = INT_MAX;
    for(auto &[it,v]:mp){
        int idx=max_element(v.begin(),v.end())-v.begin();
        v[idx]/=2;
        ans=min(ans,*max_element(v.begin(),v.end()));
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> c(n);
        for (int i = 0; i < n; i++) cin >> c[i];
        cout << solve(n, k, c) << "\n";
    }
    return 0;
}