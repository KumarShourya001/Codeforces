#include <bits/stdc++.h>
#include <vector>
using namespace std;
string Chemistry(int n,string s,int k){
  vector<int>vec(256,0);
  for(int i=0;i<n;i++){
    vec[s[i]]++;
  }
  int cnt=0;
  for(int i=0;i<vec.size();i++){
    if(vec[i]%2==0 || vec[i]==0)continue;
        cnt++;
  }
  if(cnt>k+1)return "NO";
  return "YES";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        string ans=Chemistry(n, s,  k);
        cout<<ans<<endl;
    }
}