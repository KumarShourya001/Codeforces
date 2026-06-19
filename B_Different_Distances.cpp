#include <bits/stdc++.h>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;

vector<int>diffrentDist(int n){
    vector<int>ans(4*n);

    for(int i=0;i<n;i++){
        ans[i]=i%n+1;
    }
    for(int i=n;i<2*n;i++){
        ans[i]=i%n+1;
    }
    int j=3*n-1;
    for(int i=2*n;i<3*n;i++){
        ans[i]=j%n+1;
        j--;
    }
    for(int i=3*n;i<4*n;i++){
         ans[i]=i%n+1;
    }
    if(n%2!=0){
        swap(ans[2*n],ans[(5*n)/2]);
    }
    return ans;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int>ans=diffrentDist(n);
        for(auto it : ans){
            cout<<it<<" ";
        }
        cout<<"\n";

    }
    return 0;
}