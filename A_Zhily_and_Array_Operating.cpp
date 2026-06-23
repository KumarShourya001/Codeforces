#include <bits/stdc++.h>
#include <cstddef>
#include <vector>
using namespace std;

long long arrayxhilly(vector<long long>&a){
    for(int i=a.size()-2;i>=0;i--){
            if(a[i+1]>0)a[i]+=a[i+1];
    }
    long long cnt=0;
    for(size_t i=0;i<a.size();++i){
        if(a[i]>0)cnt++;
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long ans=arrayxhilly(a);
        cout<<ans<<endl;
    }
    return 0;
}