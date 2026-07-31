#include <bits/stdc++.h>
#include <climits>
#include <vector>
#include <cstdlib>
using namespace std;

pair<long long,long long>solve(long long n){
    if(n%2!=0) return {-1,-1};
    long long m=n/2;
    if(m<2) return {-1,-1};
    long long mn=(m+2)/3;
    long long mx=m/2;
    return {mn,mx};
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        auto [mn, mx] = solve(n);
        if(mx==-1 || mn==-1)cout<<-1<<endl;
        else cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}