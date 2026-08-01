#include <bits/stdc++.h>
#include <vector>
using namespace std;

string solve(vector<int>&a ,vector<int>&b){
   int n=a.size();
    int m=b.size();
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(2*m>n) return "NO";
    for(int j=0;j<m;j++){
        if(a[j]>=b[j]) return "NO";
    }
    for(int j=0;j<m;j++){
        if(a[n-m+j]<=b[j]) return "NO";
    }
    return "YES";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        string ans=solve(a, b);
        cout<<ans<<endl;
    }
    return 0;
}