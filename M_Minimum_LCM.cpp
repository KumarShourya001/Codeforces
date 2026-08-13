#include <bits/stdc++.h>
#include <climits>
using namespace std;

long long prime(long long n){
    for (long long i = 2; i * i <= n; i++)
    if (n % i == 0) return i;
return n; 
}

pair<long long,long long> solve(long long n) {
    long long a=1;
    long long b=1;
    long long p=prime(n);
    a=n/p;
    b=n-a;
    return {a,b};
  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        auto [a, b] = solve(n);
        cout << a << " " << b << "\n";
    }
    return 0;
}