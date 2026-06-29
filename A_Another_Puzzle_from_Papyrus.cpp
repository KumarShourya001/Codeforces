#include <bits/stdc++.h>
#include <functional>
#include <vector>
using namespace std;

int papyrus(vector<int>a,vector<int>b,int n,int c){
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]>=b[i])ans+=abs(a[i]-b[i]);
        else{
            ans=-1;
            break;
        }
    }
    sort(a.begin(),a.end(),greater<>());
    sort(b.begin(),b.end(),greater<>());
    int ans1=c;
    for(int i=0;i<n;i++){
        if(a[i]>=b[i])ans1+=abs(a[i]-b[i]);
        else{
            ans1=-1;
            break;
        }
    }
    
    return ans!=-1?ans:ans1;


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int ans=papyrus(a, b, n,  c);
        cout<<ans<<endl;    
    }
    return 0;
}