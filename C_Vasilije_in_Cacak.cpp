#include <bits/stdc++.h>
#include <string>
#include <unordered_set>
using namespace std;

string isPos(long long n,long long k, long long x){
    long long minSum=(k*(k+1))/2;
    long long maxSum=(k*(2*n-k+1))/2;
    
    if(x>maxSum || x<minSum)return "NO";
    return "YES";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k, x;
        cin >> n >> k >> x;
        string ans=isPos(n, k, x);
        cout<<ans<<endl;
    }
}