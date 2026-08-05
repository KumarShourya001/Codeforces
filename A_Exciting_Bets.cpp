#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<long long> solve(long long a,long long b){
    if(abs(a-b)==1)return  {1,0};
    if(a==0 || b==0)return {a==0?b:a,0};
    if(a==b)return {0,0};
    long long g=abs(a-b);
    long long up=(g-(a%g))%g;
    long long down=a%g;
    long long val=min(up,down);
    return {g,val};
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        vector<long long> ans=solve(a, b);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
}