#include <bits/stdc++.h>
using namespace std;

long long NotDiv(long long n , long long k){
    long long x=(k-1)/(n-1);
    long long cnt=(n-1)*(x);
    long long strt=n*(x);
    long long left=k-cnt;
    
    return strt+left;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long ans= NotDiv(n,  k);
        cout<<ans<<endl;
       }
    return 0;
}