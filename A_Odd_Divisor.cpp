#include <bits/stdc++.h>
using namespace std;

bool solve(long long n){
    if((n&(n-1))==0)return  false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << (solve(n) ? "YES" : "NO") << "\n";
    }
    return 0;
}