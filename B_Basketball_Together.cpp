#include <bits/stdc++.h>
using namespace std;

int solve(vector<long long> &p, int n, long long d) {
    sort(p.begin(),p.end());
    int i=0;
    int j=n-1;
    int ans=0;
    while(i<=j){
        long long fst=p[j];
        if(i==j || fst>d){
            if(fst<=d && i==j)break;
            ans++;
            j--;
            continue;
        }
        int k=(d)/(fst) +1;
        if(j-i+1<k)break;
        i+=k-1;
        j--;
        ans++;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long d;
    cin >> n >> d;
    vector<long long> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    cout << solve(p, n, d) << "\n";
    return 0;
}