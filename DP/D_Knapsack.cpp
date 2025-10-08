#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// top down dp

vector<vector<ll> > dp(105, vector<ll> (100005, -1));

ll f(vector<int> &wts, vector<int> &val, int i, int w){
    if(i == wts.size()) return 0;

    if(dp[i][w] != -1) return dp[i][w];

    ll ans = INT_MIN;

    ans = max(ans, f(wts, val, i+1, w));

    if(wts[i]<=w){
        ans = max(ans, val[i] + f(wts, val, i+1, w - wts[i]));
    }

    return dp[i][w] = ans;
}

// bottom up
ll fbu(vector<int> &wts, vector<int> &val, int w){

   dp.clear();
   dp.resize(105, vector<ll> (100005, 0));
   int n = wts.size();

    for(int i = n-1;i>=0;i--){
        for(int j = 0;j<=w;j++){
            ll ans = INT_MIN;
            ans = max(ans, dp[i+1][j]);
            if(wts[i]<=j){
                ans = max(ans, val[i] + dp[i+1][j - wts[i]]);
            }

            dp[i][j] = ans;
            
        }
    }

    return dp[0][w];

}


int main(){

    int n,w;
    cin>>n>>w;
    vector<int> wts, val;

   for(int i = 0; i < n; i++) {
        int w, v;
        cin>>w>>v;
        wts.push_back(w);
        val.push_back(v);
    }

    cout<<fbu(wts, val, w)<<endl;

    return 0;

}