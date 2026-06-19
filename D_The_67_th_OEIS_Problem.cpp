#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<long long>construct(int n){
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int t;
    cin >> t;
    while (t--) {
       int n;
        cin >> n;
        vector<long long>ans= construct(n);
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}