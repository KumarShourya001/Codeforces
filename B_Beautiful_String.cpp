#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool is_palindrome(const string &s) {
    int n = s.size();
    for (int i = 0; i < n/2; i++)
        if (s[i] != s[n-1-i]) return false;
    return true;
}

bool non_decreasing(const string &s, const vector<int> &indices) {
    for (int i = 1; i < indices.size(); i++)
        if (s[indices[i]] < s[indices[i-1]]) return false;
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool found = false;
        for (int mask = 0; mask < (1 << n); mask++) {
            vector<int> p_indices;
            for (int i = 0; i < n; i++)
                if (mask & (1 << i)) p_indices.push_back(i);

            if (!non_decreasing(s, p_indices)) continue;

            string x = "";
            for (int i = 0; i < n; i++)
                if (!(mask & (1 << i))) x += s[i];

            if (is_palindrome(x)) {
                cout << p_indices.size() << "\n";
                for (int idx : p_indices) cout << (idx+1) << " ";
                cout << "\n";
                found = true;
                break;
            }
        }

        if (!found) cout << -1 << "\n";
    }
}
