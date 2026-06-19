#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

double minRadius(vector<double>&a,double k){
    sort(a.begin(),a.end());
    double strt=a[0]-0;
    double end = k-a[a.size()-1];
    double maxdiff=0;
    double diff=0;
    for(double i=1;i<a.size();i++){
        diff=a[i]-a[i-1];
        maxdiff=max(maxdiff,diff);
    }
    double rad=max(max(strt,end),maxdiff/2);
    return rad;
}

int main(){
    double n, k;
    cin >> n >> k;
    
    vector<double> a(n);
    for(double i = 0; i < n; i++){
        cin >> a[i];
    }
    
    double ans =minRadius(a, k) ;
    cout << fixed << setprecision(10) << ans; 
    return 0;
}