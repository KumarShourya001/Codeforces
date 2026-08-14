#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long solve(vector<long long >&a, int n,long long x){
    vector<long long >s(n,0);
    vector<long long>e(n,0);
    long long ans=0;
    for(int i=0;i<n;i++){
        s[i]=a[i]-x;
        e[i]=x+a[i];
    }
    long long strt=s[0];
    long long end=e[0];
    for(int i=1;i<n;i++){
        if(s[i]>strt){
            strt=s[i];
        }
        if(e[i]<end){
            end=e[i];
        }
        if(strt>end){
            end=e[i];
            strt=s[i];
            ans++;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long ans=solve(a,n,x);
        cout<<ans<<endl;

    }

    return 0;
}