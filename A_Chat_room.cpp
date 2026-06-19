#include <bits/stdc++.h>
#include <string>
using namespace std;

string ChatRoom(string s){
    string target = "hello";
    int j = 0;
    for(char c : s){
        if(c == target[j]){
            j++;
            if(j == target.size()) break;
        }
    }
    return j == target.size() ? "YES" : "NO";
}

int main(){
    string s;
    cin >> s;

    string ans=ChatRoom( s);
    cout<<ans;
    return 0;
}