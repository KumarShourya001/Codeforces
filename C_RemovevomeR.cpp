#include <bits/stdc++.h>
#include <string>
using namespace std;

int len2(string s){
    int n=s.size();
    if(n<=1)return n;
    int st=0;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1])st++;

    }
    return st==1?2:1 ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int ans=len2( s);
        cout<<ans<<endl;
        
        
    }
    return 0;
}