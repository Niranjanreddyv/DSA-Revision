#include<bits/stdc++.h>
using namespace std;

int f(vector<int> &arr, int target, int index, int size){
    if(target == 0){
        return 1;
    }

    if(target < 0 || index == size){
        return target == 0;
    }
    return f(arr, target, index+1, size) + f(arr, target - arr[index], index,size);
}
int main(){
    vector<int> arr = {2, 3, 4}; 
    int target = 6; 
    cout<<f(arr, target, 0, arr.size());
    return 0;
}