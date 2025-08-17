#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int index, int &x){
    if(arr[index] == x ){
        return index;
    }
    if(index == arr.size()){
        return -1;
    }
    return linearSearch(arr, index+1, x);
}

int main(){
    vector<int> arr = {1,4,6,7,8,2,5,3};
    int x = 3;
    cout<<x<<" is present at index : "<<linearSearch(arr, 0, x);
    return 0;
} 