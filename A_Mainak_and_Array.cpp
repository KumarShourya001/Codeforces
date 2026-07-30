#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

long long solve(int n, vector<long long>& nums){
    if(n==1)return 0;
    long long ans=0;
    long long mx1=LLONG_MIN;
    long long mx2=LLONG_MIN;
    long long mn=LLONG_MAX;
    for(int i=0;i<n;i++){
        mx1=max(mx1,nums[i]-nums[(i+1)%n]);
    }
    for(int i=0;i<n-1;i++){
        mn=min(nums[i],mn);
    }
    mn=nums[n-1]-mn;
    for(int j=1;j<n;j++){
        mx2=max(mx2,nums[j]);
    }
    mx2=mx2-nums[0];
    ans=max(max(mx1,mx2),mn);
    return ans;

    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << solve(n, a) << "\n";
    }
    return 0;
}