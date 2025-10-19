#include<bits/stdc++.h>
using namespace std;

// DFS

class Solution {
public:
    void f(vector<vector<char>>& grid, int i, int j){
        int n = grid.size(), m = grid[0].size();
        if(i <0 || i==n || j <0 || j==m || grid[i][j] == '0'){
            return;
        }
        grid[i][j] = '0';
        f(grid, i-1, j);
        f(grid, i+1, j);
        f(grid, i, j - 1);
        f(grid, i, j + 1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int ans = 0;
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == '1'){
                    ans++;
                    f(grid, i, j);
                }
            }
        }
        return ans;
    }

    // BFS
   
};




int main(){
    return 0;
}