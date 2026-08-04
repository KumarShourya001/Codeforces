#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long solve(vector<long long>a,int n){
    int cntone=0;
    int cntzero=0;
    long long sum=0;
    for(int i=0;i<n;i++){
        if(a[i]==1)cntone++;
        if(a[i]==0)cntzero++;
        sum+=a[i];

    }

    int dgts=n-cntzero-cntone;
    if(cntone<=0)return 0;
    if(cntzero==0)return cntone;
 
    
    return cntone*(1LL<<cntzero);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long ans=solve(a,n);
        cout<<ans<<endl;
    }
    return 0;
}