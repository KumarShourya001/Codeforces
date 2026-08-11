#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int solve(string &s) {
    int n=s.size();
    queue<int>q;
    int cnt0=count(s.begin(),s.end(),'0');
    int cnt1=count(s.begin(),s.end(),'1');
    if(cnt1==cnt0)return 0;
    for(int i=0;i<n;i++){
        if(q.empty())q.push(i);
        else if(s[q.front()]==s[i])q.push(i);
        else q.pop();
    }
    if(q.empty())return 0;
    return n- q.front();
    
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