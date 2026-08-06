#include <bits/stdc++.h>
using namespace std;

array<long long,4> solve(long long n,long long m){
    return {1,1,n,m};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, m, i, j;
        cin >> n >> m >> i >> j;
        auto[a1,b1,a2,b2]=solve(n,m);
        cout << a1 << " " << b1 << " " << a2 << " " << b2 << "\n";
    }
    return 0;
}