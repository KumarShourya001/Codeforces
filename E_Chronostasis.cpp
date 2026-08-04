#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

vector<long long> solve(vector<long long> &b, int n) {
    sort(b.begin(),b.end());
    vector<long long>a(n,-1);
    long long sum=0;
    long long fst=LLONG_MAX;
    for(int i=0;i<n;i++){
        sum+=b[i];
        if(b[i]>0){
            fst=min(fst,b[i]);
        }
    }
    long long lst=sum;
    if(sum<1)return {};
    a[0]=fst;
    multiset<long long> ms(b.begin(), b.end());
    ms.erase(ms.find(fst));
    for(int i=1;i<n;i++){
        auto it =ms.lower_bound(1-a[i-1]);
        a[i]=a[i-1]+*it;
        ms.erase(it);
    }
   return a;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<long long> a = solve(b, n);
        if (a.empty()) cout << -1 << "\n";
        else {
            for (int i = 0; i < n; i++) cout << a[i] << " \n"[i == n-1];
        }
    }
    return 0;
}