#include <bits/stdc++.h>
#include <climits>
using namespace std;

int solve(string s,int n,int k){
    int ans=INT_MAX;
    int i=0;
    int b=0;
    int w=0;
    
    int j=i;
    while(i<n){
        if(b+w==k)ans=min(ans,w);
        if(s[i]=='B')b++;
        if(s[i]=='W')w++;
        if(b+w>k){
            while (j<n&& b+w!=k) {
                if(s[j]=='B')b--;
                if(s[j]=='W')w--;
                j++;
           
            }
        }
        i++;
    }
    if(b+w==k)ans=min(ans,w);
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
        int ans=solve(s,n,k);
        cout<<ans<<endl;

    }

    return 0;
}