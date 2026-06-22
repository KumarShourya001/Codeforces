#include <bits/stdc++.h>
using namespace std;

const int SIZE = 200000;

void prime(vector<int>&primes){
    primes[0]=0;
    primes[1]=0;
    for(int i=2;i*i<=SIZE;i++){
        if(primes[i]==1){
            for(int j=i*i;j<SIZE;j+=i){
                primes[j]=0;
            }
        }
    }
}

vector<long long>construct(int n){
    vector<int>primes(SIZE,1);
    prime(primes);

    vector<long long>plist;
    for(int k=2;k<SIZE;k++){
        if(primes[k]==1){
            plist.push_back(k);
        }
    }

    vector<long long>ans;
    for(int i=1;i<=n;i++){
        if(i==1){
            ans.push_back(plist[0]);
        }
        else if(i==n){
            ans.push_back(plist[n-2]);
        }
        else{
            ans.push_back(plist[i-2]*plist[i-1]);
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>ans=construct(n);
        for(size_t i=0;i<ans.size();i++){
            cout<<ans[i]<<" \n"[i==ans.size()-1];
        }
    }
    return 0;
}