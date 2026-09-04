#include <bits/stdc++.h>
#include <vector>
using namespace std;

int solve(vector<long long>& a, long long c) {
    int n = a.size();
    vector<long long>vec;
    for(int i=0;i<n;i++){
        vec.push_back(a[i]+i+1);
    }
    sort(vec.begin(),vec.end());
    long long ans=0;
    long long cnt=0;
    for(int i=0;i<n;i++){
        cnt+=vec[i];
        if(cnt>c)break;
        ans++;
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
        long long c;

        cin >> n >> c;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << solve(a, c) << '\n';
    }

    return 0;
}