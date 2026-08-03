#include <bits/stdc++.h>
#include <string>
using namespace std;

string solve(string s){
    int n = s.size();
    int ab = 0;
    int ba = 0;

    for(int i = 0; i + 1 < n; i++){
        if(s[i] == 'a' && s[i + 1] == 'b') ab++;
        if(s[i] == 'b' && s[i + 1] == 'a') ba++;
    }

    if(ab == ba) return s;
   
    s[0] = s[n - 1];
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        string ans = solve(s);
        cout << ans << '\n';
    }

    return 0;
}