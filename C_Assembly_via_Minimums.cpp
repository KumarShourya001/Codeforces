#include <bits/stdc++.h>
#include <climits>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> solve(int n, vector<int>& b) {
    int m=b.size();
    sort(b.begin(),b.end());
    vector<int>ans(n);
    int j=0;
    int s=n-1;
    for(int i=0;i<n-1;i++){
        ans[i]=b[j];
        j+=s;s--;
    }
    ans[n-1]=ans[n-2];
    return  ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m = n * (n - 1) / 2;
        vector<int> b(m);
        for (int i = 0; i < m; i++) cin >> b[i];
        vector<int> a = solve(n, b);
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}