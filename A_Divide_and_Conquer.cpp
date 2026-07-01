#include <bits/stdc++.h>
#include <string>
using namespace std;

string DAC(int x ,int y){
    int z=gcd(x,y);
    //  cout<<z;
    if(y==z)return "YES";
    return "NO";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        string ans=DAC(x,y);
        cout<<ans<<endl;
    }
    return 0;
}