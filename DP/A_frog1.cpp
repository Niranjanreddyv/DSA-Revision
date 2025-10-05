#include<bits/stdc++.h>
using namespace std; 

vector<int> h;
vector<int> dp;


int f(int n){

   
    if(n == h.size() - 1){
        return 0;
    }

    if(dp[n] != -1) return dp[n];
    
    int c1 = abs(h[n] - h[n+1]) + f(n+1);
    int c2 = INT_MAX;
    if(n + 2 < h.size()){
        c2 = abs(h[n] - h[n+2]) + f(n+2);
    }

    return dp[n] = min(c1,c2);

}


int main(){

    int n;
    cin>>n;

    h.resize(n);

    dp.resize(n+1, -1);

    for(int i = 0;i<n;i++){
        cin>>h[i];
    }

    cout<<f(0)<<"\n";

    return 0;

}