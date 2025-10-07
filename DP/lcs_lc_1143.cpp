#include<bits/stdc++.h>
using namespace std;

// recursion 
int f(string &s1, string &s2, int i,int j){
    if(i == s1.size()) return 0;
    if(j == s2.size()) return 0;
    if(s1[i] == s2[j]){
        return 1 + f(s1,s2,i+1,i+j);
    }else{
        return max(f(s1,s2,i+1, j), f(s1,s2,i,j+1));
    }
}

// top - down dp

vector<vector<int>> dp;

int ftd(string &s1, string &s2, int i,int j){
    if(i == s1.size()) return 0;
    if(j == s2.size()) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    if(s1[i] == s2[j]){
        return dp[i][j] = 1 + ftd(s1,s2,i+1,i+j);
    }else{
        return dp[i][j] = max(ftd(s1,s2,i+1, j), ftd(s1,s2,i,j+1));
    }
}

int fbu(string &s1,string &s2){

    dp.clear();
    dp.resize(1005, vector<int> (1005, 0));

    for(int i = s1.size()-1;i>=0;i--){
        for(int j = s2.size()-1;j>=0;j--){
            if(s1[i]==s2[j]){
                dp[i][j] = 1 + dp[i+1][j+1];
            }else{
                dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
    }

    return dp[0][0];

}
int main(){
    string s1 = "axyb";
    string s2 = "abyxb";
    // ftd
    // dp.clear();
    // dp.resize(1005, vector<int> (1005, -1));
    // cout<<ftd(s1,s2,0,0)<<endl;

    // fbu
    cout<<fbu(s1,s2);

    return 0;

}