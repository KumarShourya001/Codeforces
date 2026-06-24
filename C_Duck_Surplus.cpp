#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long Duck(vector<long long>&a){
    long long sum=a[0];
    for(int i=0;i+1<a.size();i++){
        if(sum>a[i+1]){
            sum=sum+a[i+1];
        }
        else{
            sum=a[i+1];
        }
    }
    return  sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long ans=Duck(a);
        cout<<ans<<endl;    
       
    }
    return 0;
}