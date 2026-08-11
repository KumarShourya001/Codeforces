#include <bits/stdc++.h>
using namespace std;

long long solve(vector<pair<int,int>> &a, int n, long long p) {
    if(n==1)return p;
    sort(a.begin(), a.end(), [](const pair<int,int> &x, const pair<int,int> &y) {
        if (x.second != y.second) return x.second < y.second;
        return x.first > y.first;
    });
    long long amt=0;
    int i=0;
    int j=n-1;
    amt+=p;
    while(i<j){
        if(a[i].second>p){
            amt+=p;
            i++;
            continue;
        }
        
        if(j-i>a[i].first){
            amt+=1LL*a[i].first*a[i].second;
        }
        else{
            amt+=1LL*(j-i)*a[i].second;
            break;
        }
        j-=a[i].first-1;
        i++;
    }    

    return amt;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long p;
        cin >> n >> p;
        vector<pair<int,int>> a(n);
        for (int i = 0; i < n; i++) cin >> a[i].first;
        for (int i = 0; i < n; i++) cin >> a[i].second;
        cout << solve(a, n, p) << "\n";
    }
    return 0;
}