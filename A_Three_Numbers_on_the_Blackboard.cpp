#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long solve(long long a, long long b, long long c) {
    vector<long long>vec={a,b,c};
    sort(vec.begin(),vec.end());
    long long r=vec[2]-vec[0];
    if(vec[1]+vec[0]<vec[2])vec[2]=vec[1]+vec[0];
    sort(vec.begin(),vec.end());
    long long r1=vec[2]-vec[0];
    return min(r1,r);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << solve(a, b, c) << "\n";
    }
    return 0;
}