#include <bits/stdc++.h>
#include <utility>
#include <vector>
using namespace std;

vector<int> solve(vector<int> &a, int n) {
    vector<long long>pre(n,0);
    vector<pair<int, int>> vec;
    for(int i=0;i<n;i++)vec.push_back({a[i],i});
    sort(a.begin(),a.end());
    sort(vec.begin(),vec.end());
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        pre[i]=sum;
    }
    vector<int>ans(n,0);
    ans[vec[n-1].second]=n-1;
    for(int i=n-2;i>=0;i--){
        if(pre[i]>=vec[i+1].first){
            ans[vec[i].second]+=ans[vec[i+1].second];
        }
        else ans[vec[i].second]=i;
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
        vector<int> ans = solve(a, n);
        for (int i = 0; i < n; i++) cout << ans[i] << " \n"[i + 1 == n];
    }
    return 0;
}