#include <bits/stdc++.h>
#include <vector>
using namespace std;

int solve(int n,vector<int>&a){
   
    int ans=a[0];
    for(int i=0;i<n;i++){
        
        ans=ans&a[i];
    }
    return ans;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int ans=solve(n,a);
        cout<<ans<<"\n";

    }
}