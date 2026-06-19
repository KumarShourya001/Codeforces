#include<iostream>
#include<vector>

using namespace std;

string test(vector<int>&nums){
    int n=nums.size();
    int cnt=0;
    for(int i=0;i<n;i++){
        if(n%2!=0){
            if((nums[i]%2)!=((i+1)%2)){
                return "NO";
            }
        }
        else{
            if((nums[i]%2)!=((i+1)%2)){
                cnt++;
            }

        }
    }
    if(n%2==0){
        if(cnt==n){
            return "YES";
        }
        if(cnt>0){
            return "NO";
        }
    }
    return "YES";
}

int main(){

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }

        cout << test(nums) << "\n";
    }

}