#include <bits/stdc++.h>
using namespace std;

long long solve(long long x, long long y, long long k) {
    long long req=(y*k+k + x-3)/(x-1);
    req+=k;
    return req;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        cout << solve(x, y, k) << "\n";
    }
    return 0;
}