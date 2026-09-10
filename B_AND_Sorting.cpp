#include <bits/stdc++.h>
#include <climits>
using namespace std;

int solve(int n, vector<int>& p){
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        if(mn==INT_MAX && p[i]!=i)mn=p[i];
        else if(p[i]!=i)mn=mn&p[i];
    }
    return mn;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i = 0; i < n; i++) cin >> p[i];

        cout << solve(n, p) << "\n";
    }
    return 0;
}