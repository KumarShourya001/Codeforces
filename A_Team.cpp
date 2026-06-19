#include <iostream>
#include <vector>
using namespace std;

int cnt_problems(vector<vector<int>> &vec) {
    int solved = 0;
    for (int i = 0; i < vec.size(); i++) {
        int cnt = 0;
        for (int j = 0; j < vec[i].size(); j++) {
            if (vec[i][j] == 1) {
                cnt++;
            }
        }
        if (cnt >= 2) { 
            solved++;
        }
    }
    return solved;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(3));  

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> vec[i][j];
        }
    }

    int result = cnt_problems(vec);
    cout << result << endl;

    return 0;
}
