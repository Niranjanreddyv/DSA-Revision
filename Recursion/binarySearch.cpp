#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int start, int end,  int &x){
    if(start > end) {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if(arr[mid] == x){
        return mid;
    }
    else if(arr[mid] < x){
       return binarySearch(arr, mid + 1, end, x);
    }
    return binarySearch(arr, start, mid-1, x);
}

int main(){
    vector<int> arr = {1,4,6,7,8,2,5,3};
    int x = 8;
    sort(arr.begin(), arr.end());
    cout<<x<<" is present at index : "<<binarySearch(arr, 0, arr.size()-1, x);
    return 0;
} 