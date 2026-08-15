#include <bits/stdc++.h>
#include <string>
using namespace std;

string solve(int n, int r, int b) {
    string ans="";
    int q=r/(b+1);
    int rem=r%(b+1);
  
    if(b==1){
        ans=string(n,'R');
        ans[n/2]='B';
        return ans;
    }
    for(int i=0;i<b+1 ;i++){
        int cnt = q + (i < rem ? 1 : 0);
        ans.append(cnt, 'R');
        if (i < (b+1) - 1) ans.push_back('B');

    }
   
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;
        cout << solve(n, r, b) << "\n";
    }
    return 0;
}