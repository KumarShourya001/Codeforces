#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int>solve(int n){
    vector<int>ans(n,0);
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ans=solve(n);
        for(auto it:ans)cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}