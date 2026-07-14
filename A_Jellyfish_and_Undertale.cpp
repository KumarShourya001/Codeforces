#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long jellyfish(long long a,long long b,int n,vector<long long>vec){
    long long cnt=b;
    for(int i=0;i<n;i++){
        cnt+=min(1+vec[i],a)-1;
    }
    
    
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        int n;
        cin >> a >> b >> n;
        vector<long long> x(n);
        for (int i = 0; i < n; i++) cin >> x[i];
        long long ans=jellyfish(a,  b, n, x);
        cout<<ans<<endl;
       
    }
    return 0;
}