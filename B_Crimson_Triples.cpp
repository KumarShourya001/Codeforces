#include <bits/stdc++.h>
using namespace std;
 
long long boss(long long n){
    long long ans=0;
    for(long long b=1;b<=n;b++){
        long long k=n/b;
        ans+=k*k;
    }
    return ans;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans=boss(n);
        cout<<ans<<endl;
    }
    return 0;
}