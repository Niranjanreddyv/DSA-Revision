#include<bits/stdc++.h>
using namespace std;

// lc 183
int dp[1005][105][2];

int f(vector<int> &prices, int i, int k, bool on){

    if(i == prices.size()) return 0;
    if(dp[i][k][on] != -1) return dp[i][k][on];

    int ans = INT_MIN;
    ans = f(prices, i+1,k, on); // avoid
    // not avoid
    if(on){
        ans = max(ans, prices[i] + f(prices, i+1, k-1, false));
    }else{
        if(k>0)
            ans = max(ans, f(prices, i+1, k, true) - prices[i]);
    }
    return dp[i][k][on] = ans;
}

int main(){
    vector<int> prices = {3,2,6,5,0,3};
    int k = 2;
    memset(dp, -1, sizeof(dp));
    cout<<f(prices, 0, k , false)<<"\n";
    return 0;
}