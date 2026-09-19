#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long solve(long long n, long long x, long long y) {
    long long ans = 0;
    long long numx=n/x;
    long long numy=n/y;
    long long cmn=n/(lcm(x,y));
    long long v1=0;
    long long v2=0;
    
    numx-=cmn;
    numy-=cmn;
    long long k=n-numx;
    v1=(numy*(numy+1))/2;
    v2=((n*(n+1))/2)-((k*(k+1))/2);
    return v2-v1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        cout << solve(n, x, y) << "\n";
    }
    return 0;
}