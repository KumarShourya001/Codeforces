#include <bits/stdc++.h>
using namespace std;

bool solve(string &a, string &b, int n) {

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string a, b;
        cin >> n >> a >> b;
        cout << (solve(a, b, n) ? "YES" : "NO") << "\n";
    }
    return 0;
}