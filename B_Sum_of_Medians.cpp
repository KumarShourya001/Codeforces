#include <bits/stdc++.h>
using namespace std;

long long solve(vector<long long> &a, int n, int k) {
    int med=(n-1)/2;
    int i=0;
    int j=a.size()-1;
    long long sum=0;
    for(i=0;i<k;i++){
        
        j -= (n - 1 - med);
        sum+=a[j];
        j--;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(1LL * n * k);
        for (int i = 0; i < n * k; i++) cin >> a[i];
        cout << solve(a, n, k) << "\n";
    }
    return 0;
}