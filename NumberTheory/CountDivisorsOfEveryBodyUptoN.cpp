#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> countDiv(n+1, 0);

    for(int i = 1;i<=n;i++){
        for(int j = i;j<=n; j += i){
            countDiv[j]++;
        }
    }

    for(int i = 1;i<=n;i++){
        cout<<countDiv[i]<<" ";
    }
    return 0;

}