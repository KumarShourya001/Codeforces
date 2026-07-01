
#include <bits/stdc++.h>
#include <utility>
using namespace std;

long long Seller(long long n){
    vector<long long> size = {1}, price = {3};
    while(size.back() <= n){
        long long nextSize  = size.back() * 3;
        long long nextPrice = 3 * price.back() + size.back(); 
        size.push_back(nextSize);
        price.push_back(nextPrice);
        if(nextSize > n) break;
    }
    long long money = 0;
    while(n > 0){
        int idx = 0;
        for(int i = 0; i < (int)size.size(); i++)
            if(size[i] <= n) idx = i;    
        money += price[idx];
        n -= size[idx];
    }
    return money;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long ans=Seller(n);
        cout<<ans<<endl;
    }
    return 0;
}