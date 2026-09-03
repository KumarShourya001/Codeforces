#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    int ops = 0;
    // At most 6 operations are sufficient since n * m <= 25
    while (ops <= 5) {
        if (x.find(s) != string::npos) {
            cout << ops << "\n";
            return;
        }
        x += x;
        ops++;
    }

    // Final check for the last doubled string
    if (x.find(s) != string::npos) {
        cout << ops << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}