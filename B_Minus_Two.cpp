#include <bits/stdc++.h>
#include <climits>
using namespace std;

int solve(int n, vector<long long>& a){
    int cnt1=0;
    int cnt0=0;
    long long mx=LLONG_MIN;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            mx=max(a[i]/2,mx);
        }
        else cnt1++;
    }
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            if((mx-a[i]/2)%2==0)cnt0++;
            else cnt2++;
        }
    }
    return max({cnt2,cnt1,cnt0});
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        cout << solve(n, a) << "\n";
    }
    return 0;
}