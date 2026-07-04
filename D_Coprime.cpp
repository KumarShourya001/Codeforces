#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int coprime1(vector<int>vec){
    int n=vec.size();
    int j=n-1;
    for(int i=n-1;i>=0;i--){
        
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int ans=coprime1(a);
        cout<<ans<<endl;

    }
    return 0;
}