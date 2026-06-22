#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

long long costOne(long long v, long long T, long long x){
    long long best = LLONG_MAX, d = 0;
    while(true){
        if(v <= T) best = min(best, d + (T - v));   
        if(v == 0) break;
        v /= x;
        d++;
    }
    return best;
}

long long OMSK(long long a, long long b, long long x){
    long long ans = LLONG_MAX;
    long long v = a;
    while(true){
        ans = min(ans, costOne(a, v, x) + costOne(b, v, x));
        if(v == 0) break;
        v /= x;
    }
    v = b;
    while(true){
        ans = min(ans, costOne(a, v, x) + costOne(b, v, x));
        if(v == 0) break;
        v /= x;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long a, b, x;
        cin >> a >> b >> x;

        long long ans=OMSK(a,  b,  x);
        cout<<ans<<endl;
    }
    return 0;
}