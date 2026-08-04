#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std ;

int solve(string s,int n){
    vector<int>ch;
    vector<int>sz;
    for(int i=0;i<n;i++){
        if(i>0 && s[i]==s[i-1])sz.back()++;
        else{
            ch.push_back(s[i]);
            sz.push_back(1);
        }
    }
    int m=ch.size();
    int ans=INT_MAX;
    for(int j=0;j<m;j++){
        if(sz[j]>=2)ans=min(ans,m);
    }
    for(int j=1;j<=m-2;j++){
        if(sz[j]==1){
            if(ch[j-1]==ch[j+1])ans=min(ans,m-2);
            else ans=min(ans,m-1);
        }

    }
    return  ans;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans=solve(s,n);
        cout<<ans<<"\n";
        
    }
    return 0;
}