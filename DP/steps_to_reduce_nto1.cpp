#include<bits/stdc++.h>
#define inf INT_MAX
using namespace std;

int f(int n){
    if(n==1) return 0;
    if(n == 2 or n==3) return 1;
    return 1 + min({f(n-1),(n%2==0)?f(n/2):inf, (n%3==0)?f(n/3):inf});
}

vector<int> dp;

// top down time : O(n) space : O(n)
int ftd(int n){
    if(n==1) return 0;
    if(n == 2 or n==3) return 1;
    if(dp[n] != -1) return dp[n]; // nth state is precomputed
    // dp[i] = -1 then we need tp compute first time this state and store it in dp array
    return dp[n] = 1 + min({ftd(n-1),(n%2==0)?ftd(n/2):inf, (n%3==0)?ftd(n/3):inf});
}

// bottom up time : O(n) space : O(n)
int fbu(int n){
    dp.clear();
    dp.resize(n+1, -1);
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for(int i = 4;i<=n;i++){
        dp[i] = 1 + min({dp[i-1], (i%2==0)?dp[i/2]:inf, (i%3 == 0)?dp[i/3]:inf});
    }
    return dp[n];
}
int main(){

    int n; // n -> 1000
    cin>>n;
    dp.clear();
    dp.resize(1005, -1);
    cout<<ftd(n)<<"\n";
    cout<<fbu(n)<<"\n";

    return 0;

}