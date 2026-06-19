#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<long long>euclidSeq(vector<long long>&b){
    sort(b.begin(), b.end(), greater<long long>());
    if(b.size()==2)return {b[0],b[1]};

    for(int i=0;i+2<b.size();i++){
        if(b[i+2]!=b[i]%b[i+1])return {-1};
    }
    return {b[0],b[1]};
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];
        
        vector<long long>ans=euclidSeq(b);
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
        

    }
    return 0;
}