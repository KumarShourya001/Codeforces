#include <bits/stdc++.h>
using namespace std;

vector<long long> lucky;

void generate(long long num){
    if(num > 1e13) return;  
    if(num > 0) lucky.push_back(num);
    generate(num*10 + 4);
    generate(num*10 + 7);
}

int main(){
    long long n;
    cin >> n;
    
    generate(0);
    
    for(long long l : lucky){
        if(n % l == 0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}