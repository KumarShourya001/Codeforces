#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
using namespace std;

long long solve(vector<long long>& a) {
    int n=a.size();
    long long ans=0;
    int neg=0;
    bool zero=false;
    long long mn=LLONG_MAX;
    for(int i=0;i<n;i++){
        mn=min(mn,abs(a[i]));
        if(a[i]==0)zero=true;
        if(a[i]<0)neg++;
        ans+=abs(a[i]);
    }
    if(neg%2==0)return ans;
    if(zero)return ans;
    ans=ans-abs(2*mn);
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << solve(a) << '\n';
    }

    return 0;
}