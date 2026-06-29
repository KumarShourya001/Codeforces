#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int>Patapim(vector<vector<int>>g){
    int n=g.size();
    vector<int>ans(2*n,-1);
    unordered_map<int, int>mp;
 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mp.find(g[i][j])!=mp.end())continue;
            ans[i+j+1]=g[i][j];
            mp[g[i][j]]++;
            
        }
    }
    int num=-1;
    for(int i=1;i<=2*n;i++){
        if(mp.find(i)==mp.end()){
            num=i;
            break;
        }
    }
    ans[0]=num;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> g(n, vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>g[i][j];
        
        vector<int>ans=Patapim(g);
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}