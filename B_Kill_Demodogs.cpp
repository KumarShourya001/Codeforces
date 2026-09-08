#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
const long long inv2 = 500000004;  
const long long inv3 = 333333336;   

long long solve(long long n){
    long long a = n % MOD;
    long long b = (n + 1) % MOD;
    long long c = (2 * n + 1) % MOD;
    long long ans = a * b % MOD * c % MOD * inv3 % MOD;
    long long sum = a * b % MOD * inv2 % MOD;
    ans = ((ans - sum) % MOD + MOD) % MOD;
    return 2022 * ans % MOD;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        cout << solve(n) << "\n";
    }
    return 0;
}