#include <iostream>
#include <vector>
using namespace std;

int max_avg(vector<int> &vec) {
    int mx = vec[0];
    for (int x : vec) {
        if (x > mx) mx = x;
    }
    return mx;  
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        cout << max_avg(vec) << endl;
    }
    return 0;
}
