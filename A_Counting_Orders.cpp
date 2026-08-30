#include <bits/stdc++.h>
#include <functional>
using namespace std;

const long long MOD = 1000000007;
long long solve(int n, vector<long long>& a, vector<long long>& b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a[n-1]<b[n-1] || a[0]<b[0])return 0;
    long long ans=1;
    int j=0;
    long long prev=-1;
    for(int i=0;i<n;i++){
        int temp=j;
        while(j<n && b[j]<a[i])j++;
        long long cnt=j-temp;
        if(prev!=-1){
            cnt+=max(0LL,prev-1);
            prev=cnt;
        }
        else {
            prev=cnt;
        }
        ans=(ans*cnt)%MOD;
        if(cnt<=0)return 0;
    }
    return ans%MOD;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        cout << solve(n, a, b) << "\n";
    }
    return 0;
}