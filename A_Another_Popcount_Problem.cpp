#include <bits/stdc++.h>
using namespace std;


    long long pop(long long n, long long k){
    long long r=0;
    while(k*((1LL<<(r+1))-1)<=n) r++;
    long long used=k*((1LL<<r)-1);
    long long rem=n-used;
    long long btcs=(1LL<<r);
    long long ex=min(k, rem/btcs);
    return r*k+ex;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long ans=pop(n,  k);
        cout<<ans<<endl;
    }
    return 0;
}