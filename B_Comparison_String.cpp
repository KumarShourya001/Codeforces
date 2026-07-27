#include <bits/stdc++.h>
using namespace std;

int uniqueElem(string s){
    int n=s.size();
    int num=0;
    
    for(int i=0;i<n;i++){
        if(s[i]=='<'){
            int cnt=0;
            int j=i;
            while(j<n && s[j]=='<'){
                j++;
                cnt++;
            }
            i=j-1;
            if(cnt>=num)num=cnt;
        }
        else if(s[i]=='>'){
            int cnt=0;
            int j=i;
            while(j<n && s[j]=='>'){
                cnt++;
                j++;
            }
            i=j-1;
            if(cnt>num)num=cnt;
        }

    }
    return num+1;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans=uniqueElem(s);
        cout<<ans<<endl;
    }
    return 0;
}