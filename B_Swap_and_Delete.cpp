#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int solve(string &s) {
    int n=s.size();
    int cnt0=count(s.begin(),s.end(),'0');
    int cnt1=count(s.begin(),s.end(),'1');
    if(cnt1==cnt0)return 0;
    //find cont 1 and cont 0;from start;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << "\n";
    }
    return 0;
}