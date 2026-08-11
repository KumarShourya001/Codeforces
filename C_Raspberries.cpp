#include <bits/stdc++.h>
#include <climits>
using namespace std;

int solve(vector<int> &a, int n, int k) {
    if(k!=4){
        int min_cnt=INT_MAX;
        for(int i=0;i<n;i++){
            int req=(k - a[i]%k) % k;
            min_cnt=min(min_cnt,req);
        }
        return min_cnt;
    }
    int mn=INT_MAX;
    int smn=INT_MAX;
    int cnt=INT_MAX;
    for(int i=0;i<n;i++){
        int req=(2-a[i]%2)%2;
        int req1=(k - a[i]%k) % k;
        cnt=min(cnt,req1);
        if(a[i]%k==0)return 0;
        if(req<=mn){
            smn=mn;
            mn=req;
        }
        else if(req1<smn && req1>mn){
            smn=req;
        }
    }
    return min(cnt,mn+smn);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << solve(a, n, k) << "\n";
    }
    return 0;
}