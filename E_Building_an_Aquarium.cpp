#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

long long solve(vector<int> &a, int n, long long x) {
    long long sum=0;
    long long lo=1;
    long long hi=*max_element(a.begin(),a.end())+x;
    long long ans=x;
    while(lo<=hi){
        long long mid=lo +(hi-lo)/2;
        long long sum=0;

        for(int i=0;i<n;i++){
            sum+=max(0LL,mid-(1LL*a[i]));
        }
        if(sum<=x){
            ans=mid;
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
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
        long long x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << solve(a, n, x) << "\n";
    }
    return 0;
}