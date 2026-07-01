#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;



long long goodNum(long long x){
     long long pow10 = 1, tmp = x;
        while(tmp > 0){ pow10 *= 10; tmp /= 10; }
        return pow10 + 1 ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        long long ans=goodNum(x);
        cout<<ans<<endl;
    }
    return 0;
}