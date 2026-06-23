#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

const long long MOD = 676767677;

int mindist(vector<int>a){
    int n=a.size();
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]!=1)ans+=a[i];
    }
    if(a[n-1]==1)ans++;
    return ans%MOD;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int ans=mindist(a);
        cout<<ans<<endl;
    }
    return 0;
}