#include <bits/stdc++.h>
#define ll long long int
using namespace std;

// https://www.hackerearth.com/problem/algorithm/mancunian-and-k-ordered-lcs-e6a4b8c6


/* test case
    5 5 1
    1 2 3 4 5
    5 3 1 4 2
*/

ll dp[2005][2005][8];

ll f(vector<int> &v1, vector<int> &v2, int i, int j,int k){
	if(i >= v1.size() || j >= v2.size()) return 0;
	if(dp[i][j][k] != -1) return dp[i][j][k];
	ll res = 0;
	if(v1[i] == v2[j]){
		res = 1 + f(v1,v2, i+1,j+1,k);
	}else{
		if(k>0){
			res = 1 + f(v1,v2,i+1,j+1,k-1);
		}
		res = max({res, f(v1,v2,i+1, j,k), f(v1,v2,i,j+1,k)});
	}

	dp[i][j][k] = res;
	return res;
} 

int main() {
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> v1(n), v2(m);
	for(int i = 0;i<n;i++){
		cin>>v1[i];
	}
	for(int i = 0;i<m;i++){
		cin>>v2[i];
	}
	memset(dp, -1, sizeof(dp));
	cout<<f(v1, v2, 0, 0, k)<<"\n";

	return 0;
}