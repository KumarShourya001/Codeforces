#include <iostream>
#include <string>
using namespace std;

using namespace std;

int Seats(int n,string s){

    int cnt=0;
    
    for(int i=0;i<n;i++){
         if(s[i]=='1'){cnt++;continue;}

     int lft=i;
    
     while( i<n && s[i]=='0')i++;
     int L=i-lft;
     int blocked=0;
     if(lft-1>=0  && s[lft-1]=='1') blocked++;
    if(i<n && s[i]=='1')blocked++;
    cnt+=(L+2-blocked)/3;
    i--;
     
    }
   
    return cnt;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int ans=Seats(n,  s);
        cout<<ans<<endl;
    }
    return 0;
}
