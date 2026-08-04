#include <bits/stdc++.h>
using namespace  std;

int solve(int a,int b ,int c){
    int mn=min({abs(a-b),abs(b-c),abs(c-a)});
    return mn;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int ans=solve(a,b,c);
        cout<<ans<<"\n";
    }
    return 0;
}