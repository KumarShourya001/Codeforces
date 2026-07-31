#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long solve(int n,vector<long long>&a){
    long long ans=0;
    if(n==1 || n==0)return ans;
    for(int i=n-2;i>=0;i--){
        while(a[i+1]<=a[i]){
            if(a[i]<=0)return -1;
            a[i]/=2;
            ans++;
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long ans=solve(n,  a);
        cout<<ans<<endl;
        
    }
    return 0;
}