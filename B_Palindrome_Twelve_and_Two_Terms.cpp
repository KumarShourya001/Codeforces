#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool ispalindrome(long long a){
    long long sum=0;
    long long cpy=a;
    while(a>0){
        long long temp=a%10;
        sum=sum*10+temp;
        a=a/10;
    }
    return sum==cpy;
}

bool isdiv(long long b){
   if(b%12==0)return true;
   return false;
}

vector<long long>check(long long n){
    long long a=0;
    long long b=0;
    for(long long i=0;i<=n/2 +1;i++){
        a=i;
        b=(n-a);
        if(isdiv(b) && ispalindrome(a)) return {a,b};
        if(isdiv(a) && ispalindrome(b))return {b,a};
    }
    return {-1};
}

int  main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        vector<long long>ans=check(n);
        for(auto it: ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}