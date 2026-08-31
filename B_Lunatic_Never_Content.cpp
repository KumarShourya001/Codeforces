#include <bits/stdc++.h>
#include <climits>
using namespace std;

long long solve(vector<long long>& a) {
    int n=a.size();
    int i=0;
    int j=n-1;
    long long ans=0;
    
    
    while(i<j){
        ans=gcd(abs(a[i]-a[j]),ans);
        j--;
        i++;
    }
    
    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << solve(a) << '\n';
    }

    return 0;
}