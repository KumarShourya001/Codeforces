#include <bits/stdc++.h>
#include <functional>
#include <vector>
using namespace std;

long long Balanced(int n,long long k,vector<long long>vec){
   sort(vec.begin(), vec.end());
    int best = 1, cur = 1;
    for(int i = 1; i < n; i++){
        if(vec[i] - vec[i-1] <= k) cur++;
        else cur = 1;
        best = max(best, cur);
    }
    return n - best;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        long long ans=Balanced(n,  k, a);
        cout<<ans<<endl;
    }
}