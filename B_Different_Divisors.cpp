#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int LIM = 35000;
vector<bool> comp(LIM + 1, false);
vector<int> primes;

ll solve(int d) {
   int p = *lower_bound(primes.begin(), primes.end(), d + 1);
    int q = *lower_bound(primes.begin(), primes.end(), p + d);
    return 1LL * p * q;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 2; i <= LIM; i++) {
    if (!comp[i]) {
        primes.push_back(i);
        for (long long j = 1LL * i * i; j <= LIM; j += i)
            comp[j] = true;
    }
}
    while (t--) {
        int d;
        cin >> d;
        ll ans=solve(d);
        cout << ans << "\n";
    }
    return 0;
}