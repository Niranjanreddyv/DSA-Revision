#include<bits/stdc++.h>
using namespace std;
bool TargetSum(vector<int> &arr, int index, int size, int target){
    if(target == 0){
        return 1;
    }

    if(index == size || target < 0){
        return 0;
    }

    return TargetSum(arr, index+1, size, target) || TargetSum(arr, index+1, size, target - arr[index]);
}
int main(){
    vector<int> arr = {6,5,3,4};
    vector<int> ans;
    int target = 12;
    cout<<TargetSum(arr, 0, arr.size(), target);
    
    return 0;
}