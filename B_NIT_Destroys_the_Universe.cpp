#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long solve(vector<long long>&a,int n){
    int ans=0;
    int j=n-1;
    int i=0;
    bool val=false;
    while(i<n  && a[i]==0)i++;
    while( j>=0&& a[j]==0)j--;
    if(i>j)return 0;
    for( ;i<=j;i++){
         if(a[i]==0){
            val=true;
        }
    }
    if(val==false)return 1;
    return 2;

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
        long long ans=solve(a,  n);
        cout<<ans<<endl;
    }
    return 0;
}