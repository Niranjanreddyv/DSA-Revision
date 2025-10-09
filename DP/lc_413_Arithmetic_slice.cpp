#include<bits/stdc++.h>
using namespace std;

// bottom up 

int numberOfArithmeticSlices(vector<int>& nums) {

    int n = nums.size();
    vector<int> dp(n);
    if(n<3) return 0;

    for(int i=2;i<n;i++){
        if(nums[i] - nums[i-1] == nums[i-1] - nums[i-2]){
            dp[i] = dp[i-1] + 1;
        }

    }

    int ans = 0;
    for(int i = 0;i<n;i++){
        ans += dp[i];
    }

    return ans;

        
}

int main(){

    vector<int> nums = {1,2,3,4};

    cout<<numberOfArithmeticSlices(nums)<<endl;

    return 0;

}