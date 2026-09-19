#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long solve(long long n, long long x, long long y) {
    long long ans = 0;
    long long numx=n/x;
    long long numy=n/y;
    long long cmn=n/(lcm(x,y));
    long long v1=0;
    long long k=n;
    for(int i=0;i<numx-cmn;i++){
        v1+=k;
        k--;
    }
    k=1;
    for(int i=0;i<numy-cmn;i++){
        v1-=k;
        k++;
    }
    return v1;
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