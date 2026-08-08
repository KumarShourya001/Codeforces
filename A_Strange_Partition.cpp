#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <vector>
using namespace std;

pair<long long,long long>solve(vector<long long >&a,int n,long long x){
    long long mn=LLONG_MAX;
    long long mx=LLONG_MIN;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    mn=min(mn,(sum+x-1)/x);
    sum=0;
    for(int i=0;i<n;i++){
        sum+=(a[i] + x - 1) / x;
    }
   
    mx=max(mx,sum);
    return {mn,mx};
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
        vector<long long> a(n);
        for (int k = 0; k < n; k++) cin >> a[k];
        auto[mn,mx]=solve(a,n,x);
        cout<<mn<<" "<<mx<<"\n";

    }
    return 0;
}