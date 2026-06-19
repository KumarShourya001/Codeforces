#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<long long>Monster(vector<long long>&a ,int n,int k){
    vector<long long>ans;
    vector<pair<long long,long long>>vec;
    for(int i=0;i<n;i++){
        long long key = a[i]%k==0?k:a[i]%k;
        vec.push_back({key,i});
    }
    sort(vec.begin(),vec.end(),[](const auto& x, const auto& y){
        if(x.first!=y.first)return x.first>y.first;
        return x.second<y.second;
    });
    for(int i=0;i<n;i++){
        ans.push_back(vec[i].second+1);
    }


    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<long long>ans=Monster(a ,n,k);
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout << "\n";
    }
    return 0;
}