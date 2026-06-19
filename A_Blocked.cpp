#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int>blocked(vector<int>& a){
    sort(a.begin(),a.end(), greater<int>());
    for(int i=0;i<a.size();i++){
        if(i+1<a.size() &&a[i]==a[i+1] )return  {-1};
    }
    vector<int>ans={};
    for(int i=0;i<a.size();i++){
        ans.push_back(a[i]);
    }

    return  ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int>ans=blocked(a);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}