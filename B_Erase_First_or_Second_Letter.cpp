#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long solve(string &s, int n) {
    long long ans=0;
    vector<bool>seen(256,false);
    int cnt=0;
    for(int i=0;i<n;i++){
        if(seen[s[i]]==false)cnt++;
        seen[s[i]]=true;
        ans+=cnt;
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
        string s;
        cin >> n >> s;
        cout << solve(s, n) << "\n";
    }
    return 0;
}