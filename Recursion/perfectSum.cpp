#include<bits/stdc++.h>
using namespace std;

int f(vector<int> &arr, int target, int index, int size){

    if(index == size){
        return target == 0;
    }
    return f(arr, target, index+1, size) + f(arr, target - arr[index], index+1,size);
}
int main(){
    vector<int> arr = {0, 10, 0}; //1 -> 0, 10, 0   2-> 5, 2, 3, 10, 6, 8
    int target = 0; // 0 10
    cout<<f(arr, target, 0, arr.size());
    return 0;
}