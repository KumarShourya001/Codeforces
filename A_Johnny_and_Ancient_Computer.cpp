#include <bits/stdc++.h>
using namespace std;

int solve(long long a, long long b) {
    vector<int>vec={8,4,2};
    int cnt=0;
    if(a<b){
        if(b%a==0){
            long long res=(b/a);

            if(!(res&(res-1))){
                cnt=0;
                int i=0;
                while(res>=2){
                    if(i>=vec.size())break;
                    if(res%vec[i]==0){
                        cnt++;
                        res=res/vec[i];
                    }
                    else i++;
                }
            }
            else return -1;
        }
        else return -1;
    }
    else if(a==b)return 0;
    else{
        if(a%b==0){
            long long res=(a/b);
            if(!(res&res-1)){
                cnt=0;
                int i=0;
                while(res>=2){
                    if(i>=vec.size())break;
                    if(res%vec[i]==0){
                        cnt++;
                        res=res/vec[i];
                    }
                    else i++;
                }

            }
            else return -1;
        }
        else return -1;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        cout << solve(a, b) << "\n";
    }
    return 0;
}
