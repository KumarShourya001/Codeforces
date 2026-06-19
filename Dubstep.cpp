#include <bits/stdc++.h>
#include <string>
using namespace std;

string dubstep(string s){
    int lt=3;
    string str="";
    int i=0;
    while(i<s.size()){
        while(i+lt<=s.size()&&s.substr(i,lt)=="WUB"){
            i+=lt;
        }
        while(i<s.size() && s.substr(i,lt)!="WUB"){
            str.push_back(s[i]);
            i++;
        }
        str+=" ";
    }
    return str;
}

int main(){
    string s="";
    cin>>s;
    string ans=dubstep(s);
    cout<<ans<<endl;;
}
