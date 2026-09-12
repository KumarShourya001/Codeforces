#include <bits/stdc++.h>
#include <vector>
using namespace std;

string solve(string& s){
    vector<int>mp(256,0);
    int n=s.size();
    int j=0;
    for(int i=0;i<n;i++){
        if(mp[s[i]]!=0){
            j=i;
            break;
        }
        mp[s[i]]++;
    }
    for(int i=0;i+j<n;i++){
        if(s[i]!=s[i+j])return "NO";
    }
    return "YES";
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