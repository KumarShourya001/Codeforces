#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

string vector_sum(vector<vector<int>>& mat){
    int sum=0;
    for(int i=0;i<mat[0].size();i++){
        sum=0;
        for(int j=0;j<mat.size();j++){
            sum+=mat[j][i];
        }
        if(sum!=0) return "NO";
    }
    return "YES";
}

int main(){
    int n;
    cin >> n;
    
    vector<vector<int>> mat(n, vector<int>(3));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    string ans=vector_sum(mat);
    cout<<ans;
    
    return 0;
}