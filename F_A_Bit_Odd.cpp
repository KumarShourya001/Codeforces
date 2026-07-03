#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char s[200005];
        scanf("%s", s);
        
        bool alice = false;
        int ones = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') ones++;
            else if(ones & 1) alice = true;
        }
        int zeros = 0;
        for(int i = n-1; i >= 0; i--){
            if(s[i] == '0') zeros++;
            else if(zeros & 1) alice = true;
        }
        printf(alice ? "Alice\n" : "Bob\n");
    }
    return 0;
}