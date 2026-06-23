#include <bits/stdc++.h>
using namespace std;

long long multi(long long n){
    long long cnt=0;
    if(n==1)return 0;
    if(n%3!=0)return -1;
    while( true && n>1){
        if(n%3!=0)return -1;
        if(n%6==0)n=n/6;
        else n=2*n;
        cnt++;
    }
    if(n==1)return cnt;
    else return -1;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long ans=multi(n);
        cout<<ans<<endl;
       
    }
    return 0;
}