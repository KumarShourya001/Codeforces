#include <bits/stdc++.h>
using namespace std;

string solve(int n, vector<int>& a){
    map<int,int> cnt;
    for(int i = 0; i < n; i++) cnt[a[i]]++;
    if(cnt.size() > 2) return "No";
    if(cnt.size() == 1) return "Yes";
    vector<int> c;
    for(auto& p : cnt) c.push_back(p.second);
    sort(c.begin(), c.end());
    if(c[0] == n/2 && c[1] == n - n/2) return "Yes";
    return "No";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << solve(n, a) << "\n";
    }
    return 0;
}