#include <bits/stdc++.h>
using namespace std;

long long Valid(long long n){
    int i=2;
    long long cnt=1;
    long long maxcnt=0;
    bool prev;
    while(i<=60){
        if(n%i==0 && n%(i-1)==0){
            cnt++;
        }
        else{
            cnt=1;
            
        }
        maxcnt=max(maxcnt,cnt);
        i++;
    }
    return  maxcnt;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long ans=Valid(n);
        cout<<ans<<endl;
    }
}