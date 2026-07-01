#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

long long ArrGames(vector<vector<int>>&arrays){
    for(auto &it:arrays){
        sort(it.begin(),it.end());
    
    }
    sort(arrays.begin(),arrays.end(),[](const auto& a,const auto&b){
        return a[1]>b[1];
    });
    long long sum = 0;
    int minEle=INT_MAX;
       for(int i=0;i<arrays.size()-1;i++){
            sum+=arrays[i][1];
            minEle=min(minEle,arrays[i][0]);
       } 
       minEle=min(minEle,arrays[arrays.size()-1][0]);
       sum+=minEle;
   
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;                          

        vector<vector<int>> arrays(n);
        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;                     
            arrays[i].resize(m);
            for (int j = 0; j < m; j++)
                cin >> arrays[i][j];
        }
        long long ans=ArrGames(arrays);
        cout<<ans<<endl;


    }
    return 0;
}