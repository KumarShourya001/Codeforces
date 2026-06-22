#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

string game(string s ,int k){
    if(k>s.size())return "NO";
    for(int i=0;i+k<s.size();i++){
        if(s[i]=='1'){
            s[i]='0';
            if(s[i+k]=='0')s[i+k]='1';
            else s[i+k]='0';
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')return "NO";
    }
    return "YES";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        string ans=game(s, k);
        cout<<ans<<endl;
        
    }
    return 0;
}