#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long ghost(vector<long long>a,vector<long long>b){
    int n=a.size();
    long long cnt=0;
    vector<pair<int,int>>vec;
    for(int i=0;i<n;i++){
        vec.push_back({a[i],i});
    }
    for(int i=0;i<n;i++){
        
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<long long> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];

        long long ans=ghost(a, b);
        cout<<ans<<endl;
    }
    return 0;
}