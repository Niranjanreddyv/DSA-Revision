#include<bits/stdc++.h>
using namespace std;

vector<int> dp(105, -1);
// vector<int> dp;

// recursion code
int f(vector<int> &arr , int i){
    if(i == arr.size() - 1) return arr[i];
    if(i == arr.size() - 2) return max(arr[i], arr[i+1]);

    return max(arr[i] + f(arr, i+2), 0 + f(arr, i +1));
}

// top-down dp

int ftd(vector<int> &arr, int i){
    if(i == arr.size() - 1) return arr[i];
    if(i == arr.size() - 2) return max(arr[i], arr[i+1]);

    if(dp[i] != -1) return dp[i];

    return dp[i] = max(arr[i] + ftd(arr, i+2), 0 + ftd(arr, i +1));
}

// bottom-up

int fbu(vector<int>&arr){
    int n = arr.size();
    if(n==1) return arr[0];
    dp.clear();
    dp.resize(n);
    dp[n-1] = arr[n-1];
    dp[n-2] = max(arr[n-1], arr[n-2]);

    for(int i = n-3;i>=0;i--){
        dp[i] = max(arr[i] + dp[i+2], dp[i+1]);
    }
    return dp[0];
}



int main(){
    vector<int> arr = {2,1,1,9}; // {2,1,1,9},  {2,7, 9, 3, 1}, {1,2,3}

    // dp.clear();
    // dp.resize(105, -1);

    // cout<<f(arr, 0)<<"\n";
    cout<<ftd(arr, 0)<<"\n";
    cout<<fbu(arr)<<"\n";
    return 0;
}