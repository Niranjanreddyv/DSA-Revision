#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> dp;
int N, M;
int f(int i, int j){
    if(i == N-1 and j == M - 1) return 1;
    if(i>+N or j>=M or i<0 or j<0) return 0;
    if(dp[i][j] != -1) return dp[i][j];

    return dp[i][j] = f(i+1, j) + f(i, j+1);
}


int uniquePaths(int m, int n) {
    N = m;
    M = n;
    dp.clear();
    dp.resize(105,vector<int> (105,-1));
    return f(0,0);
    
}

int main(){
    cout<<uniquePaths(3, 7)<<endl;
    return 0;
}