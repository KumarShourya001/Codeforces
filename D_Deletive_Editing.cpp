#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

string solve(string s,string t){
    if(t.size()>s.size())return "NO";
    if(t.size()==s.size())return s==t?"YES":"NO";
    string str="";
    vector<int>ch(256,0);
    vector<int>mp(256,0);
    int n=s.size();
    for(int i=0;i<t.size();i++){
        ch[t[i]]++;
    }
    for(int i=0;i<n;i++){
        if(ch[s[i]]!=0){
            str.push_back(s[i]);
            mp[s[i]]++;
        }
    }
    n=str.size();
    string ans="";
    for(int i=0;i<n;i++){
        if(mp[str[i]]>ch[str[i]]){
            mp[str[i]]--;
            str[i]='.';
        }
        if(str[i]!='.')ans.push_back(str[i]);
    }
    if(ans==t)return "YES";
    return  "NO";
    

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while(n--){
        string s, t;
        cin >> s >> t;
        string ans=solve(s,  t);
        cout<<ans<<"\n";
    }
    return 0;
}