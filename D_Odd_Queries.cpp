#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

vector<string> solve(int n, vector<long long>& a, vector<array<long long,3>>& queries){
    
    vector<long long>pre(n+1,0);
    long long sum=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        pre[i+1]=sum;
    }
    vector<string>vec;
    for(int i=0;i<queries.size();i++){
        int strt=queries[i][0];
        int end=queries[i][1];
        long long elem=queries[i][2];
        
        long long k=sum -(pre[end]-pre[strt-1])+(end-strt+1)*elem;
        
        if(k%2!=0)vec.push_back("YES");
        else vec.push_back("NO");
        
    }
    return vec;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<array<long long,3>> queries(q);
        for(int i = 0; i < q; i++){
            cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
        }
        vector<string> ans =solve(n, a, queries);
        for(auto it :ans){
            cout<<it<<endl;
        }
        
    }
    return 0;
}