#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int beautiful_string(string s) {
    int pref2 = 0, suf = 0;
    for(char c : s) if(c == '1' || c == '3') suf++;
    
    int ans = pref2 + suf;
    for(char c : s) {
        if(c == '2') pref2++;
        if(c == '1' || c == '3') suf--;
        ans = max(ans, pref2 + suf);
    }
    return s.size() - ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        cout << beautiful_string(s) << "\n";
    }
}