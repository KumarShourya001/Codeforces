#include <bits/stdc++.h>
#include <vector>
using namespace std;

int solve(vector<int>&a,int n){
    if(n==1)return 0;
   
    int mx_cnt=0;
    int lft=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int mx=0;
        int fst=a[i];
        while(a[i]==fst){
            i++;
            mx++;
        }
        i--;
        if(mx>mx_cnt){
            mx_cnt=mx;
        }
    }
    if(mx_cnt==n)return 0;
    int ans=n-mx_cnt;
    lft=n-mx_cnt;
    while(lft>0){
        lft-=mx_cnt;
        mx_cnt*=2;
        ans++;
    }
    return ans;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n,0);
        for(int i=0;i<n;i++)cin>>a[i];
        int ans=solve(a,n);
        cout<<ans<<"\n";
    }
}