#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long solve(vector<long long>&a,int n){
    
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
        long long ans=solve(a,  n);
        cout<<ans<<endl;
    }
    return 0;
}