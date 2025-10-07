#include<bits/stdc++.h>
using namespace std;

vector<int> coins;

int fbu(int x){
    sort(coins.begin(), coins.end());

    vector<int> dp(1000006, x + 1);

    dp[0] = 0;

    for(int i = 1;i<=x;i++){
        for(int j = 0;j<coins.size();j++){
            if(i-coins[j]<0) break;
            dp[i] = min(dp[i], dp[i - coins[j]] + 1);
        }

    }

    if(dp[x] > x){
        return -1;
    }
    return dp[x];

}

int main(){

    int n,x;
    cin>>n>>x;

    for(int i = 0;i<n;i++){
        int num;
        cin>>num;
        coins.push_back(num);

    }

    cout<<fbu(x)<<"\n";

    return 0;

}