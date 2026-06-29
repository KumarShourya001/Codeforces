#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

string mocha(vector<long long>a){
    long long n=a.size();
    
    sort(a.begin(),a.end());
    long long num1=a[0];
    long long nums2=INT_MAX;
    for(long long i=0;i<n;i++){
        if(a[i]%num1==0)a[i]=-1;
        else{
            nums2=min(nums2,a[i]);
       }
    }
    for(int i=1;i<n;i++){
       if(a[i]%nums2==0)a[i]=-1;
    }
    for(long long i=0;i<n;i++){
        if(a[i]!=-1)return "No";
    }
    return "Yes";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(long long i=0;i<n;i++) cin>>a[i];
        string ans=mocha(a);
        cout<<ans<<"\n";
    }
    return 0;
}