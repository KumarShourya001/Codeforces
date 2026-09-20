#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>& a) {
    if(n==1)return  1;
    int cont=0;
    for(int i=0;i+1<n;i++){
        cont+=abs(a[i]-a[i+1]);
    }
    if(cont==0)return 1;
    int ans=2;
    
    int lst=a[0]-a[1];
    for(int i=1;i+1<n;i++){
        int val=a[i]-a[i+1];
        if((val>=0 && lst>=0) || (val<=0 && lst<=0)){
            if(val!=0)lst=val;
            continue;
        }
        lst=val;
        ans++;
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
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << solve(n, a) << "\n";
    }
    return 0;
}