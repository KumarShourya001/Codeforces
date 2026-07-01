#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> minSum(vector<int>a,int n){
    vector<int>diff;
    int sum=0;
    if(a[0]==-1 && a[n-1]==-1){
        a[0]=0;
        a[n-1]=0;
    }
    if(a[0]==-1 &&a[n-1]!=-1 )a[0]=a[n-1];
    if(a[0]!=-1 && a[n-1]==-1)a[n-1]=a[0];
    for(int i=0;i<n;i++){
        if(a[i]==-1){
            a[i]=0;
        }
        
    }
    cout<<abs(a[n-1]-a[0])<<endl;
    return a;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int>ans=minSum(a,  n);
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;

    }
    return 0;
}