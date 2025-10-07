#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
vector<vector<int>> dp;

int f(int n, int k, int t){
    if(n==0 && t==0) return 1;
    if(n==0) return 0;
    
    int sum = 0;
    if(dp[n][t] != -1) return dp[n][t];
    for(int v = 1;v<=k;v++){
        if(t-v < 0) break;
        sum = ((sum%mod) + f(n - 1, k, t - v) % mod) % mod;

    }

    return dp[n][t] = sum % mod;
}


int main(){
    int n, k , t;
    cin>>n>>k>>t;
    dp.clear();
    dp.resize(35, vector<int> (1005, -1));
    cout<<f(n, k, t)<<"\n";
    return 0;
}