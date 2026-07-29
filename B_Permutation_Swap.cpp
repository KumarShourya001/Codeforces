#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

int perSwap(vector<int>nums){
    int swp=INT_MAX;
    int n=nums.size();
    int ans=0;
    for(int i=0;i<n;i++){
        if(abs(nums[i]-1-i)!=0){
            swp=abs(nums[i]-i-1);
            if(ans==0)ans=gcd(swp,swp);
            else ans=gcd(ans,swp);          
        }
    }
    return  ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i = 0; i < n; i++){
            cin >> p[i];
        }
        int ans=perSwap(p);
        cout<<ans<<endl; 
    }
    return 0;
}