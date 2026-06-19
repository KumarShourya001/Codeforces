#include <bits/stdc++.h>
#include <ios>
#include <vector>
using namespace std;

vector<long long>vessel(vector<long long>&h){
    vector<long long>ans;
    int n=h.size();
    for(int i=0;i<n;i++){
        vector<long long>w(n,0);
        int rht=(i+1)%n;
        int lft=(i - 1 + n) % n;;
        while(lft!=rht){
            w[i]=0;
            w[lft]=h[lft];
            w[rht]=h[rht];
        }
        
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> h(n);
        for (int i = 0; i < n; i++) cin >> h[i];
        vector<long long >ans=vessel(h);
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
       
    }
    return 0;
}