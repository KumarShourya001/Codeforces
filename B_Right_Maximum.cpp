#include <bits/stdc++.h>
#include <utility>
#include <vector>
using namespace std;

int RMaxi(vector<int>a){
    int n=a.size();
    vector<pair<int, int>>vec;
    for(int i=0;i<n;i++){
        vec.push_back({a[i],i});
    }
    sort(vec.begin(),vec.end(),greater<>());
    int cnt=0;
    int size=n-1;
    for(int i=0;i<vec.size();i++){
        if(vec[i].second>size){
            continue;
        }
        size=vec[i].second;
        cnt++;
        if(vec[i].second==0)break;
    }
    return cnt;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans=RMaxi(a);
        cout<<ans<<endl;    
     
    }
    return 0;
}