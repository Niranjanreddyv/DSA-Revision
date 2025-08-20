#include<bits/stdc++.h>
using namespace std;
void subsetSum(vector<int> &arr, int index, int size, int sum, vector<int> &ans){
    if(index == size){
        ans.push_back(sum);
        return;
    }

    // NO
    subsetSum(arr, index+1, size, sum, ans);
    // YES 
    subsetSum(arr, index+1, size, sum + arr[index], ans);
}
int main(){
    vector<int> arr = {1,2,3,4};
    vector<int> ans;
    subsetSum(arr, 0, arr.size(), 0, ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}