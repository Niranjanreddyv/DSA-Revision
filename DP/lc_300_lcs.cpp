#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
vector<int> dp;

// top down

int f(int i){

    if(i == 0) return 1;
    if(dp[i] != -1) return dp[i];
    int mx = INT_MIN;
    for(int j = 0;j<=i-1;j++){

        if(arr[j]<arr[i]){
            mx = max(mx, f(j));
        }
        
    }
    if(mx == INT_MIN) return dp[i] = 1;

    return dp[i] = 1 + mx;
}

// bottom up

int fbu(){
    int ans = INT_MIN;
    for(int i=0;i<arr.size();i++){
        for(int j = 0;j<=i-1;j++){
            if(arr[j]<arr[i]){
                dp[i] = max(dp[i], 1+dp[j]);
            }
        }
        if(dp[i] == -1) dp[i] = 1;
        ans = max(ans, dp[i]);
    }
    return ans;
}


int main(){
    vector<int> nums = {10,9,2,5,3,7,101,18};
    arr = nums;
    dp.clear();
    dp.resize(2505, -1);
    dp[0] = 1;

    // int ans = INT_MIN;

    // for(int i = 0;i<nums.size();i++){
    //     ans = max(ans, f(i));
    // }

    // cout<<ans<<endl;

    cout<<fbu()<<endl;

    return 0;

}