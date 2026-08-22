#include <bits/stdc++.h>
using namespace std;

pair<int,int> solve(string &s, int n) {
    stack<int>st;
    int l=-1;
    int r=-1;
    for(int i=0;i<n;i++){
        while(!st.empty() && s[st.top()]>s[i]){
            r=i+1;
            l=st.top()+1;
            st.pop();
        }
        if(l!=-1)break;
        st.push(i);

    }
    return {l,r};

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;
    auto [l, r] = solve(s, n);
    if (l == -1) cout << "NO\n";
    else cout << "YES\n" << l << " " << r << "\n";
    return 0;
} 