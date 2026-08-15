#include <bits/stdc++.h>
#include <vector>
using namespace std;


vector<long long>solve(vector<long long>s,int n){
    vector<long long>ans(n,0);
    int i=0;
    while(i<n){
        long long fst=s[i];
        int j=i;
        while( j<n && s[j]==fst)j++;
        j--;
        int cnt=j-i+1;
        if(cnt<2)return {-1};
            ans[i]=j+1;
            i++;
            while(i<n && i<=j){
                ans[i]=i;
                i++;
            }
    }
    

    return ans;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        vector<long long>ans=solve(s,n);
        if(ans[0]==-1)cout<<-1<<endl;
        else for(auto it:ans)cout<<it<<" ";
        cout<<"\n";
    }

    return 0;
}