#include<bits/stdc++.h>
using namespace std;

vector<int> dp;

vector<int> getdigits(int n){
    vector<int> res;
    while(n>0){
        if(n%10 != 0){
            res.push_back(n%10);
        }
        n = n / 10;
    }
    return res;
}

int f(int n){
    if(n == 0) return 0;
    if(n<=9) return 1;

    if(dp[n] != -1) return dp[n];

    vector<int> d = getdigits(n);


    int result = INT_MAX;
    for(int i = 0;i<d.size();i++){
        result = min(result , f(n - d[i]));

    }
    return dp[n] = 1 + result;
}

int fbu(int num){
    dp[0] = 0;
    for(int i = 1;i<=9;i++){
        dp[i] = 1;
    }
    
    for(int n = 10;n <= num;n++){

        vector<int> d = getdigits(n);
        int result = INT_MAX;

        for(int i = 0;i<d.size();i++){
            result = min(result , dp[n - d[i]]);
        }

        dp[n] = 1 + result;

    }

    return dp[num];
}


int main(){
    int n;
    cin>>n;
    
    dp.clear();
    dp.resize(1000005, -1);

    cout<<fbu(n)<<"\n";
    return 0;
}