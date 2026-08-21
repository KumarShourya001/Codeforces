#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int solve(string &s, int n) {
    int ans=0;
    int mx_ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(')ans++;
        else ans--;
        if(ans<0)mx_ans=max(mx_ans,abs(ans));
    }    
    return mx_ans;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << solve(s, n) << "\n";
    }
    return 0;
}