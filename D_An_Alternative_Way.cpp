#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool altWay(vector<long long>a,vector<long long>b){
    int n=a.size();
    long long p=0;
    for(int i=0;i<n;i++){
        p+=b[i]-a[i];
        if(p<0){
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        bool ok = altWay(a,b); 

        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}