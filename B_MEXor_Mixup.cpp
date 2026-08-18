#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int>x;
int solve(int a, int b) {
    int ans=a;
    int xor1=x[a-1];
   
    if(xor1==b)return ans;
    ans++;
   if((xor1 ^ b) == a) ans++;
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int xr=0;
    for(int i=0;i<300000;i++){
        xr=xr^i;
        x.push_back(xr);
    }
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << solve(a, b) << "\n";
    }
    return 0;
}