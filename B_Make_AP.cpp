#include <bits/stdc++.h>
#include <string>
using namespace std;

string solve(long long a ,long long b,long long c){
    long long ans=(a+c)/2;
    if((a+c)%2==0 && ans%b==0)return "YES";
        long long chk=b*2-c;
        if(chk<=0)return "NO";
        if( chk%a==0)return "YES";
        chk=b*2-a;
        if(chk<=0)return "NO";
        if( chk%c==0)return "YES";
    
    return "NO";

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;
        string ans=solve(a,b,c);
        cout<<ans<<endl;
    }
    return 0;
}