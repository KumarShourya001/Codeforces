#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

long long solve(string& s){
    long long mx=0;
    long long cnt=0;
    int n=s.size();
    if(n==1){
        if(s[0]=='1')return 1;
        else return 0;
    }
    for(int i=0;i<2*n;i++){
        if(s[i%n]=='1'){
            cnt++;
            if(cnt>=n){
                return (long long) n*n;
            }
        }
        else {
            mx=max(cnt,mx);
            cnt=0;
        }
        mx=max(cnt,mx);
    }
    if(mx==0)return 0;
    long long h = (mx + 1) / 2;
    return h * (mx + 1 - h);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        cout << solve(s) << "\n";
    }
    return 0;
}