#include <bits/stdc++.h>
using namespace std;

string sortProb(vector<int>& a, int n){
    long long k = 0;
    for(int i = 0; i + 1 < n; i++)
        k = max(k, (long long)a[i] - a[i+1]);   
    long long prev = -1;

    for(int i = 0; i < n; i++){
        long long lo = a[i], hi = a[i] + k;
        if(lo >= prev) prev = lo;          
        else if(hi >= prev) prev = hi;     
        else return "NO";                  
    }
    return "YES";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << sortProb(a, n) << "\n";
    }
    return 0;
}