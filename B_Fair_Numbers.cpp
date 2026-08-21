#include <bits/stdc++.h>
#include <string>
#include <unordered_set>
using namespace std;

long long solve(long long n) {
  
    while (true) {
        long long m=n;
        bool corr=true;
        while(m>0){
            long long res=m%10;
            m=m/10;
            if(res!=0 && n%res!=0){
                corr=false;
                break;
            }
        }
        if(corr)return n;
        n++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << solve(n) << "\n";
    }
    return 0;
}