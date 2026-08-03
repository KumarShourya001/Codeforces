#include <bits/stdc++.h>
using namespace std;

int check(string s, char a, char b) {
    int n = s.size();

    int pos2 = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == b) {
            pos2 = i;
            break;
        }
    }
    if (pos2 == -1) return 1e9;

    int pos1 = -1;
    for (int i = pos2 - 1; i >= 0; i--) {
        if (s[i] == a) {
            pos1 = i;
            break;
        }
    }
    if (pos1 == -1) return 1e9;

    return (n - 1 - pos2) + (pos2 - 1 - pos1);
}

int solve(long long n) {
    string s = to_string(n);

    return min({
        check(s, '0', '0'),
        check(s, '2', '5'),
        check(s, '5', '0'),
        check(s, '7', '5')
    });
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        cout << solve(n) << '\n';
    }

    return 0;
}