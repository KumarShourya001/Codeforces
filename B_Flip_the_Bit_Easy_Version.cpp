#include <bits/stdc++.h>
using namespace std;

int flip(vector<int>&a,int p){
    int n=a.size();
    int x=a[p-1];
    int cnt=0;
    for(int i=p-1;i<n;i++){
        if(a[i]!=x && (i==p-1 || a[i-1]==x))cnt++;
    }
    int cnt2=0;
    for(int i=0;i<p;i++){
        if(a[i]!=x && (i==0 || a[i-1]==x))cnt2++;
    }
    return 2*max(cnt,cnt2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int p;
        cin >> p;

        int ans=flip(a,  p);
        cout<<ans<<endl;
    }
    return 0;
}