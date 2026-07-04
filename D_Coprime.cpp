#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int coprime1(vector<int>nums){
    int n=nums.size();
    int j=n-1;
    int maxi=-1;
    vector<int>mp(1001,0);
    for(int i=0;i<n;i++){
        mp[nums[i]]=i+1;
    }

    for(int j=0;j<mp.size();j++){
            if(mp[j]==0)continue;
            for(int k=j;k<mp.size();k++){
                if(mp[k]==0)continue;

                if(gcd(j,k)==1 && mp[j]!=0 && mp[k]!=0){
                    maxi=max(maxi,mp[j]+mp[k]);
                }
            }
        }
    return maxi;
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