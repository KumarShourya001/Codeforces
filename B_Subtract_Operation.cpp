#include <bits/stdc++.h>
using namespace std;

bool solve(int n, long long k, vector<long long>& a){
    sort(a.begin(),a.end());
    for(int i=n-1;i>=0;i--){
        long long tar=a[i]-k;
        int lo=0;
        int hi=i-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(a[mid]==tar){
                return true;
            }
            else if(a[mid]<tar)lo=mid+1;
            else hi=mid-1;
        }
    }
    
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        cout << (solve(n, k, a)?"YES":"NO") << "\n";
    }
    return 0;
}