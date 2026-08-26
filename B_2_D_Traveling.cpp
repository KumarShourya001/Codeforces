#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
using namespace std;

long long solve(vector<pair<long long,long long>> &p, int n, int k, int a, int b) {
    auto[xstrt,ystrt]=p[a];
    auto[xend,yend]=p[b];
    long long mnstr=LLONG_MAX;
    long long mnend=LLONG_MAX;
    
    for(int i=0;i<k;i++){
        mnstr=min(mnstr,abs(xstrt-p[i].first)+abs(ystrt-p[i].second));
        mnend=min(mnend,abs(xend-p[i].first)+abs(yend-p[i].second));
    }
    long long dir=abs(xend-xstrt)+abs(yend-ystrt);
   
    if(mnstr==LLONG_MAX)return dir;
    return min(mnstr+mnend,dir);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<pair<long long,long long>> p(n);
        for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
        cout << solve(p, n, k, a - 1, b - 1) << "\n";
    }
    return 0;
}