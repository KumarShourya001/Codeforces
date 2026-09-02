#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int>& c) {
   int n=c.size();
   if(n==1){
    if(c[0]==1)return true;
    return false;
   }
   sort(c.begin(),c.end());
   long long sum=c[0];
   if(sum!=1)return false;
   for(int i=1;i<n;i++){
    if(sum<c[i] )return false;
    sum+=c[i];
   }
   return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> c(n);
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }

        bool ans=solve(c);
        cout<<(ans?"YES":"NO")<<"\n";
    }

    return 0;
}