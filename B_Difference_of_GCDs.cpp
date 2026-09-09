#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<long long> solve(int n, long long l, long long r){
    vector<long long >ans(n,0);  

    for(int i=0;i<n;i++){
        ans[i]=((l+i)/(i+1))*(i+1);
        if(ans[i]>r)return {};

}
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        long long l, r;
        cin >> n >> l >> r;

        vector<long long> res = solve(n, l, r);
        if(res.empty()) cout << "NO\n";
        else{
            cout << "YES\n";
            for(int i = 0; i < n; i++) cout << res[i] << " ";
            cout << "\n";
        }
    }
    return 0;
}