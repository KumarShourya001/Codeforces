#include <bits/stdc++.h>
#include <functional>
#include <vector>
using namespace std;

vector<int> solve(vector<int> &a, int n) {
    sort(a.begin(),a.end(),greater<>());
    vector<int>an=a;
    return an;
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
        vector<int> ans = solve(a, n);
        for (int i = 0; i < n; i++) cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}