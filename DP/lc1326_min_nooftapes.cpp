#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ranges = {4,0,0,0,0,0,0,0,4};
    int n = 8;
    vector<int> dp(n+1, INT_MAX);
    dp[0] = 0;
    for(int i = 0;i<=n;i++){
        int start = max(0, i - ranges[i]);
        int end = min(n, i + ranges[i]);
        int ans = INT_MAX;
        for(int j = start;j<=end;j++){
            // dp[end] = min(dp[end], dp[j]+1);
            ans = min(ans, dp[j]);
        }
        if(ans != INT_MAX){
            dp[end] = min(dp[end] , ans+1);
        }
    }

    if(dp[n] == INT_MAX){
        cout<<-1<<"\n";
    }else{
        cout<<dp[n]<<"\n";
    }
    
    return 0;

}