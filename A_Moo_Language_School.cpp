#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k, string& s){
    int cnt=0;
    int j=0;
    for(int i=0;i<n;i++){
        j=i;
        bool frm=false;
        while(j-i+1<=k){
            if(s[j]=='0')frm=true;
            j++;
        }
        if(!frm)cnt++;
        i=j-1;
    }   
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        cout << solve(n, k, s) << "\n";
    }
    return 0;
}