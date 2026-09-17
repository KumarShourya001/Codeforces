#include <bits/stdc++.h>
using namespace std;

long long solve(int n, vector<long long>& a) {
    long long ans = 0;
    long long gcd1=a[0];
    long long gcd2=a[1];
    for(int i=2;i<n;i++){
        if(i%2==0){
            gcd1=gcd(gcd1,a[i]);
        }
        else{
            gcd2=gcd(gcd2,a[i]);
        }
    }
    
    if(gcd1==gcd2)return 0;
    bool val1=false;
    bool val2=false;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if( a[i]%gcd2==0)val1=true;
        }
        else{
            if( a[i]%gcd1==0)val2 =true;
        }
    }
    if(val1&&val2)return 0;
    if(gcd1%gcd2==0)return gcd1;
    if(gcd2%gcd1==0)return gcd2;    
    if(val1)return gcd1;
    return  gcd2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << solve(n, a) << "\n";
    }
    return 0;
}