#include <bits/stdc++.h>
using namespace std;

int passball(string s ,int n){
    int i=0;
   
   for( i=0;i<n;i++){
    if(s[i]=='L')break;
   }
    return i+1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans=passball(s,  n);
        cout<<ans<<endl;    
        
    }
    return 0;
}