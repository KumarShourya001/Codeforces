#include <bits/stdc++.h>
#include <vector>
using namespace std;


using namespace std;

long long maxSum(vector<long long> nums, int k){
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<long long> pr(n+1, 0);
    for(int i = 0; i < n; i++) pr[i+1] = pr[i] + nums[i];
    
    long long best = 0;
    for(int i = 0; i <= k; i++){
        long long sum = pr[n - (k - i)] - pr[2*i];
        best = max(best, sum);
    }
    return best;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long ans=maxSum(a,k);
        cout<<ans<<endl;
    }
    return 0;
}