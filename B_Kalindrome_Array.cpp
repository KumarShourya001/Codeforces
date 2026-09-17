#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& a, int x) {
    int i=0;
    int j=a.size()-1;
    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else if(a[i]==x)i++;
        else if(a[j]==x)j--;
        else return false;
    }
    return true;
}

bool solve(int n, vector<int>& a) {
    int i=0;
    int j=n-1;
    while(i<j && a[i]==a[j]){
        i++;
        j--;
    }
    if(i>=j)return true;
    return check(a,a[i]) || check(a,a[j]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << (solve(n, a) ? "YES" : "NO") << "\n";
    }
    return 0;
}