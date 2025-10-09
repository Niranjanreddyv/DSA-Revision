#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;

bool f(vector<int> &arr, int i, int k){

    if(k == 0) return true;
    if(i == arr.size()) return false;

    if(dp[i][k] != -1) return dp[i][k];

    if(arr[i] <= k){
        return dp[i][k] = f(arr, i+1, k - arr[i]) or f(arr, i+1, k);
    }else{
        return dp[i][k] = f(arr, i+1, k);
    }

}

// bottom up code

int fbu(vector<int> &arr, int k){
    int n = arr.size();
    dp.clear();
    dp.resize(205, vector<int> (20005, false));
    // dp[n][0] = true;
    for(int i = 0;i<n;i++){ // base case null subset always true
        dp[i][0] = true;
    }
    for(int i = n-1;i>=0;i--){
        for(int j = 1;j<=k;j++){
            if(j == 0) dp[i][j] = true;
            if(arr[i]<=j){
                dp[i][j] = dp[i+1][j - arr[i]] or dp[i+1][j];
            }else{
                dp[i][j] = dp[i+1][j];
            }
        }
    }
    return dp[0][k];
}

int main(){
    vector<int> arr = {1,5,11,5}; // 1,2,3,5 -> 0 // 1,5,11,5 -> 1
    int s = 0;
    for(int i = 0;i<arr.size();i++){
        s += arr[i];
    }
    dp.clear();
    dp.resize(205, vector<int> (20005, -1));


    if(s%2!=0) {
        cout<<0<<endl;
    }else{
        cout<<f(arr, 0, s/2);
    }
    
    return 0;
}