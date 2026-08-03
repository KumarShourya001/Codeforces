#include <bits/stdc++.h>
using namespace std;

long long solve(long long x,long long n){

    if(n%4==0)return x;
    long long strt=4*(n/4)+1;
    if(x%2==0){
        
        x-=strt;
        strt++;
        x+=strt;
        strt++;
        x+=strt;
    }
    else{
        x+=strt;
        strt++;
        x-=strt;
        strt++;
        x-=strt;
    }
    return x;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x;
        long long n;
        cin>>x>>n;
        long long ans=solve(x, n);
        cout<<ans<<endl;    
    }
}