#include <bits/stdc++.h>
using namespace std;

pair<int,int> solve(int n, vector<int>& a, vector<int>& b){
    int l=-1;
    int r=-1;
    int lmx=-1;
    int rmx=-1;
    for(int i=0;i<n;i++){
            bool ch=false;
            int l=i;
            while(i+1<n && b[i]<=b[i+1]){
                if(a[i]!=b[i])ch=true;
                i++;
            }
            r=i+1;
            l=l+1;
            if(r-l>rmx-lmx && ch){
                lmx=l;
                rmx=r;
            }
        
    }
    return {lmx,rmx};
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        auto [l, r] = solve(n, a, b);
        cout << l << " " << r << "\n";
    }
    return 0;
}