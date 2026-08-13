#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<long long> solve(long long n, long long k, long long b, long long s) {
    vector<long long>ans(n,0);
    if(b>s/k)return {-1};
    if(s-k*b>n*(k-1))return {-1};
    long long fst=b*k ;
    if(fst>s )return {-1};
    long long sec=s-fst;
   
    for(int i=0;i<n-1;i++){
        if(sec<0)break;
        if(sec-(k-1)<0){
            ans[i]=sec;
            sec=0;
            break;
        }
        ans[i]=k-1;
        sec-=(k-1);

    }
    long long chk=0;
    ans[n-1]=fst+sec;
   
    return  ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        vector<long long> ans = solve(n, k, b, s);
        if (ans.size() == 1 && ans[0] == -1) {
            cout << "-1\n";
        } else {
            for (int i = 0; i < (int)ans.size(); i++)
                cout << ans[i] << " ";
            cout<<endl;
        }
    }
    return 0;
}