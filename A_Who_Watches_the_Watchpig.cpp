#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k, string& s){
    if(n < 2*k) return -1;
    int cnt = 0;
    for(int i = 0; i < k; i++) if(s[i] == 'L') cnt++;
    for(int i = n-k; i < n; i++) if(s[i] == 'R') cnt++;
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;

        cout << solve(n, k, s) << "\n";
    }
    return 0;
}