#include <bits/stdc++.h>
#include <functional>
#include <vector>
using namespace std;

int games(vector<int>&h ,int n){
    sort(h.begin(),h.end(),greater<>());
    return h[0]+1-h[h.size()-1];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> h(n);
        for(int i = 0; i < n; i++){
            cin >> h[i];
        }
        int ans=games(h,  n);
        cout<<ans<<" ";
        cout<<endl; 
        
    }
    return 0;
}