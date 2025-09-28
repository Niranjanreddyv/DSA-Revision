#include<bits/stdc++.h>
using namespace std;
int main(){
    
    unordered_map<int,int> mp;

    mp.insert(make_pair(20, 30));
    mp[30] = 40;

    cout<< mp[30] <<endl;

    for(auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}