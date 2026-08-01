#include <bits/stdc++.h>
#include <string>
using namespace std;

string solve(string s,int n){
    int i=0;
    int j=0;
    while(i<s.size()&& s[i]!='0'){
        i++;
    }
    s.erase(i,1);
    while(j<s.size() && s[j]!='1'){
        j++;
    }
    s.erase(j,1);
    return  s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        string ans=solve(s, n);
        cout<<ans<<endl;
        
    }
    return 0;
}