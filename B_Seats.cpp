#include <iostream>
#include <string>
using namespace std;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int ans = 0;
        for (char c : s)
            if (c == '1') ans++;

        for (int i = 0; i < n; i++) {

            if (s[i] == '0') {
                bool left_ok = (i == 0 || s[i - 1] == '0');
                bool right_ok = (i + 1 < n && s[i + 1] == '0');

                if (left_ok && right_ok) {
                    s[i + 1] = '1';
                    ans++;
                    i += 2; 
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
