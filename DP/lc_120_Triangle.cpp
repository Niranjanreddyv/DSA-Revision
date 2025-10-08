#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> grid;
vector<vector<int>> dp;

int f(int r, int c){
    if(r == grid.size()-1)  return grid[r][c];

    if(dp[r][c] != -1) return dp[r][c];

    return dp[r][c] = grid[r][c] + min(f(r+1, c), f(r+1,c+1));

}



 int main(){
    vector<vector<int>> triangle = {
        {2},
        {3, 4},
        {6, 5, 7},
        {4, 1, 8, 3}
    };

    grid = triangle;

    dp.clear();
    dp.resize(205, vector<int> (205, -1));
    
    // bottom up code
    int row = grid.size();

    for(int i = 0;i<grid[row-1].size();i++){
        dp[row-1][i] = grid[row-1][i];
    }

    for(int r = row - 2;r>=0;r--){
        for(int c = 0;c < grid[r].size();c++){
            dp[r][c] = grid[r][c] + min(dp[r+1][c], dp[r+1][c+1]);
        }
    }

    cout<<dp[0][0]<<endl;
    // cout<<f(0, 0)<<"\n";
    return 0;

 }