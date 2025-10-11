#include<bits/stdc++.h>
using namespace std;

int dp[505][505];
int f(string& s1, string &s2, int i, int j){
    if(i == s1.size()) return s2.size() - j;
    if(j == s2.size()) return s1.size() - i;
    if(dp[i][j] != -1) return dp[i][j];
    if(s1[i] == s2[j]) return dp[i][j] = f(s1,s2,i+1,j+1);
    return dp[i][j] = 1 + min({f(s1,s2,i+1,j+1), f(s1,s2,i+1,j), f(s1,s2,i, j+1)});
}


int main(){

    string s1 = "horse";
    string s2 = "ros";

    memset(dp, -1, sizeof(dp));


    cout<<f(s1,s2, 0, 0)<<endl;

    return 0;
    
}