#include <bits/stdc++.h>
#include <climits>
#include <unordered_map>
#include <vector>
using namespace std;

int subarray(vector<int>p){
    int g=0;
    int cnt=0;
    
    for(int i=0;i<p.size();i++){
        if(i+1<p.size() && abs(p[i]-p[i+1])==gcd(p[i],p[i+1]))cnt++;
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];
        
        int ans=subarray(p);
        cout<<ans<<endl;
        
    }
    return 0;
}