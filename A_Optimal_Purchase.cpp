#include <iostream>

using namespace std;

long long min_amt(long long n, long long a, long long b){
    long long groups = n / 3;
    long long remain = n % 3;
    
    long long cost = groups * min(b, 3*a);
    
    if(remain > 0)
        cost += min(b, remain*a);
    
    return cost;
}

int main(){
   
    int t;
    cin >> t;
    while(t--){
        long long n, a, b;
        cin >> n >> a >> b;
        long long ans=min_amt(n,a,b);
        cout<<ans<<endl;
    }

}

