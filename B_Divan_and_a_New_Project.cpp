#include <bits/stdc++.h>
#include <functional>
#include <iterator>
#include <vector>
using namespace std;

pair<long long, vector<int>> solve(vector<int> &a, int n) {
    vector<pair<int ,int>>vec;
    for(int i=0;i<n;i++){
        vec.push_back({a[i],i+1});
    }
    sort(vec.begin(),vec.end(),greater<>());

    vector<int>ans(n+1);
    long long sum=0;
    int l=1;
    int r=-1;
    ans[0]=0;
    for(int i=0;i<n;i++){
        if(l<abs(r)){
            ans[vec[i].second]=l;
            sum+=2*(1LL*l*vec[i].first);
            l++;
        }
        else {
        ans[vec[i].second]=r;
        sum+=2LL*abs(r)*vec[i].first;
        r--;
        }
    }
    return {sum,ans};
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
        auto [T, x] = solve(a, n);
        cout << T << "\n" ;
        for (int i = 0; i <= n; i++) cout << x[i]<<" ";
        cout << "\n";
    }
    return 0;
}