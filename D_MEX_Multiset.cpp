#include <bits/stdc++.h>
#include <string>
using namespace std;

string solve(int n, vector<int>& a){
    int cnt0=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)cnt0++;
    }
    if(cnt0==1)return "";
    string str(n,'C');
    bool fst=true;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            if(fst){str[i]='A';fst=false;}
            else str[i]='B';
        }
    }
    return str;
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

        string res = solve(n, a);
        if(res.empty()) cout << "NO\n";
        else cout << "YES\n" << res << "\n";
    }
    return 0;
}