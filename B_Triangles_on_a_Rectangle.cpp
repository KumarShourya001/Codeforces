#include <bits/stdc++.h>
using namespace std;

long long solve(long long w, long long h,
                vector<long long> &bottom,
                vector<long long> &top,
                vector<long long> &left,
                vector<long long> &right) {

        long long btm=(bottom[bottom.size()-1]-bottom[0]);
        long long tp=top[top.size()-1]-top[0];
        long long lft=left[left.size()-1]-left[0];
        long long rht=right[right.size()-1]-right[0];
        long long x1_b=0;
        long long x2_b=0;
        long long y1_b=0;
        long long y2_b=0;
        if(btm>tp){
            x1_b=bottom[0];
            y1_b=0;
            x2_b=bottom[bottom.size()-1];
            y1_b=0;
        }
        else{
            x1_b=top[0];
            y1_b=h;
            x2_b=top[top.size()-1];
            y1_b=h;
        }
        long long x1_l=0;
        long long y1_l=0;
        long long x2_l=0;
        long long y2_l=0;
        if(lft>rht){
            y1_l=left[0];
            x1_l=0;
            y2_l=left[left.size()-1];
            x2_l=0;
        }
        else{
            y1_l=right[0];
            x1_l=w;
            y2_l=right[right.size()-1];
            x2_l=w;
        }
        if(abs(y2_l-y1_l)*w >abs(x2_b-x1_b)*h){
            return abs(y2_l-y1_l)*w ;
        }
        else{
            return abs(x2_b-x1_b)*h;
        }
        
       
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long w, h;
        cin >> w >> h;

        int k;
        vector<long long> bottom, top, left, right;

        cin >> k;
        bottom.resize(k);
        for (int i = 0; i < k; i++) cin >> bottom[i];

        cin >> k;
        top.resize(k);
        for (int i = 0; i < k; i++) cin >> top[i];

        cin >> k;
        left.resize(k);
        for (int i = 0; i < k; i++) cin >> left[i];

        cin >> k;
        right.resize(k);
        for (int i = 0; i < k; i++) cin >> right[i];

        cout << solve(w, h, bottom, top, left, right) << '\n';
    }

    return 0;
}