#include <bits/stdc++.h>
#include <iostream>
#include <type_traits>
#include <vector>
using namespace std;



vector<int>constArray(int n){
    vector<int>vec;
    int mx=2*n-1;
    for(int i=0;i<n;i++){
        vec.push_back(mx);
        mx--;

    }
    return vec;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int>ans=constArray(n);
        for(auto it: ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    return 0;
}