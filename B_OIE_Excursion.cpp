#include <iostream>
#include <string>
#include <vector>
using namespace std;

string travel(vector<int>& a,int k){
   bool ans=true;

   int run = 1;
    for(int i = 0; i < a.size(); i++){
        if(i > 0 && a[i] == a[i-1]) run++;
        else run = 1;
        if(run >= k) return "NO";
    }
    return "YES";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
        
            cin >> a[i];
        }
        string str=travel(a, k);
        cout<<str<<endl;
    }
}