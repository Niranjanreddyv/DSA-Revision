#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// bottom up 

int numberOfArithmeticSlices(vector<int>& nums) {

    int n = nums.size();
    vector<unordered_map<ll,ll>> dp(n);
    ll ans = 0;

    for(int i = 1;i<n;i++){
        for(int j =0;j<i;j++){
            ll diff = (ll)nums[i] - (ll)nums[j];
            if(dp[j].find(diff) != dp[j].end()){
                ans += dp[j][diff];
            }
            dp[i][diff] += dp[j][diff] + 1;
        }
    }

    return ans;

        
}

int main(){

    vector<int> nums = {7,7,7,7,7}; // 7,7,7,7,7 // 2,4,6,8,10

    cout<<numberOfArithmeticSlices(nums)<<endl;

    return 0;

}