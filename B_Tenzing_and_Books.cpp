#include <bits/stdc++.h>
#include <vector>
using namespace std;

string solve(int n, long long x, vector<long long>& a, vector<long long>& b, vector<long long>& c){
    if(x==0)return "Yes";
    long long curr=0;
    long long curr1=0;
    long long curr2=0;
    long long curr3=0;
    vector<int>bts(32,0);
    for(int i=0;i<32;i++){
        if(((1<<i)&x)!=0){
            bts[i]=1;
        }
    }

    for(int i=0;i<n;i++){
        bool leave=false;
        for(int bits=0;bits<32;bits++){
            int temp=((1LL<<bits)&a[i]);
            int t=bts[bits];
            if(t==0 && temp!=0){
                leave=true;
                break;
            }
        }
        if(leave)break;
        curr1|=a[i];
        curr|=a[i];
    }
    for(int i=0;i<n;i++){
        bool leave=false;
        for(int bits=0;bits<32;bits++){
            int temp=((1LL<<bits)&b[i]);
            int t=bts[bits];
            if(t==0 && temp!=0){
                leave=true;
                break;
            }
        }
        if(leave)break;
        curr2|=b[i];
        curr|=b[i];
    }
    for(int i=0;i<n;i++){
        bool leave=false;
        for(int bits=0;bits<32;bits++){
            int temp=((1LL<<bits)&c[i]);
            int t=bts[bits];
            if(t==0 && temp!=0){
                leave=true;
                break;
            }
        }
        if(leave)break;
        curr3|=c[i];
        curr|=c[i];
    }

    if(curr==x || curr1==x|| curr2==x || curr3==x)return "Yes";
    
    return "No";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        long long x;
        cin >> n >> x;
        vector<long long> a(n), b(n), c(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 0; i < n; i++) cin >> c[i];

        cout << solve(n, x, a, b, c) << "\n";
    }
    return 0;
}