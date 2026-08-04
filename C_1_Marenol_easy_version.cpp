#include <bits/stdc++.h>
using namespace std;

vector<pair<string,string>> ops = {{"001","100"},{"100","001"},{"011","110"},{"110","011"}};
bool solve(string &a, string &b, int n) {

    if(a==b)return true;
    if(n==2) return false;
    int cnt_one=0;
    int cnt_zero=0;
    int cnt1=0;
    int cnt0=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1'){cnt_one++;cnt1++;}
        else {cnt_zero++;cnt0++;}
        if(b[i]=='1')cnt_one--;
        else cnt_zero--;
    }
    if(cnt_zero!=0 || cnt_one!=0)return false;
    int ev_1=0;
    int od_1=0;
    int ev_0=0;
    int od_0=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            if(i%2!=0)ev_1++;
            else od_1++;

        }
        if(b[i]=='1'){
            if(i%2!=0)ev_0++;
            else od_0++;
        }
    }
    if(ev_0==ev_1 && od_0==od_1)return true;
    return false;

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