#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

long long capLcm(long long x, long long y, long long m){
    long long g = __gcd(x, y);
    long long step = x / g;
    if (step > m / y + 1) return m + 1;   
    return min(step * y, m + 1);
}

vector<long long> Spring(long long a ,long long b,long long c ,long long m){
    int wt=6;
    long long A=0;
    long long B=0;
    long long C=0;
    A=m/a;
    B=m/b;
    C=m/c;
    
    long long cnt_abc = m / capLcm(capLcm(a, b, m), c, m);
   
    long long cnt_ab=m/lcm(a,b) -cnt_abc;
    long long cnt_bc=m/lcm(b,c) -cnt_abc;
    long long cnt_ca=m/lcm(c,a) -cnt_abc;
    A=A-cnt_ab-cnt_ca-cnt_abc;
    B=B-cnt_ab-cnt_bc-cnt_abc;
    C=C-cnt_bc-cnt_ca-cnt_abc;
    long long tot_a=A*6+cnt_ab*3+cnt_ca*3+cnt_abc*2;
    long long tot_b=B*6+cnt_ab*3+cnt_bc*3+cnt_abc*2;
    long long tot_c=C*6+cnt_bc*3+cnt_ca*3+cnt_abc*2;

    return {tot_a,tot_b,tot_c};
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, m;
        cin >> a >> b >> c >> m;
        
       vector<long long>ans=Spring(a,  b, c,  m);
       for(auto it:ans){
        cout<<it<<" ";
       }
       cout<<endl;
    }
    return 0;
}