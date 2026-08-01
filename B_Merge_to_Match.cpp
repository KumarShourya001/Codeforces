#include <bits/stdc++.h>
#include <vector>
using namespace std;

string solve(vector<int>&a ,vector<int>&b){
    int n=a.size();
    int m=b.size();
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int j=0;
    int i=0;
    while(i<n && j<m){
        int k=i+1;
        while(k<n && a[k]<b[j])k++;
        i=k-1;
        i++;
        j++;
    }
    if(j>=m)return "Yes";
    return "No";
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