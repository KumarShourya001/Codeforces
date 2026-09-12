#include <bits/stdc++.h>
#include <vector>
using namespace std;

int solve(int n, vector<int>& w){
    vector<int>pref(n);
    vector<int>suff(n);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=w[i];
        pref[i]=sum;
    }
    sum=0;
    for(int i=n-1;i>=0;i--){
        sum+=w[i];
        suff[i]=sum;
    }
    int cnt=0;
    for(int i=n-1;i>=0;i--){
        int lo=0;
        int hi=i-1;
        int tar=suff[i];
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if( pref[mid]==tar){
                cnt=max(cnt,(n-i+1)+(mid+1))-1;
                break;
            }
            else if(pref[mid]>tar){
                hi=mid-1;
            }
            else lo=mid+1;
        }
    }
    return  cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> w(n);
        for(int i = 0; i < n; i++) cin >> w[i];

        cout << solve(n, w) << "\n";
    }
    return 0;
}