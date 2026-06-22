#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
using namespace std;

long long divc(long long v,int b){
    long long cnt=0;
    while(v>0){
        v/=b;
        cnt++;
    }
    return cnt;
}

long long AddandDivide(long long a ,long long b){
    long long ans=LLONG_MAX;
    long long cnt=0;
    
    while(cnt<=60){
        long long v=a;
        long long prev=ans;
        if(b+cnt<2){cnt++;continue;}
        ans=min(ans,cnt+divc(v,(b+cnt)));
        cnt=cnt+1;
    }
    return  ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        long long ans=AddandDivide(a,  b);
        cout<<ans;
        cout<<endl;
    }
}