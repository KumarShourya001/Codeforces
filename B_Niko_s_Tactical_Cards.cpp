#include<iostream>
#include <vector>
using namespace std;

int nikoCards(vector<int>&a ,vector<int>&b){
    
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        long long ans = 0;
        ans=nikoCards(a,b);
    }
}