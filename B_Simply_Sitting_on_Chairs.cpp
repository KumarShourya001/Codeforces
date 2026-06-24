#include <bits/stdc++.h>
#include <vector>
using namespace std;

int sittingChair(vector<int>p){
    int n=p.size();
    vector<bool>mp(n+1,0);
    int cnt=0;
    for(int i=0;i<p.size();i++){
        if(mp[i+1]==false)cnt++;
        mp[i+1]=true;
        mp[p[i]]=true;
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i = 0; i < n; i++) cin >> p[i];
        int ans=sittingChair(p);
        cout<<ans<<endl;
    }
    return 0;
}