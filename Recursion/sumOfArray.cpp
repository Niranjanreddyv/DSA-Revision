#include<bits/stdc++.h>
using namespace std;
// int sumOfArray(vector<int>& arr,int index, int sum){
//     if(index == arr.size()){
//         return sum;
//     }
//     sumOfArray(arr, index + 1, sum + arr[index]);
// }

int sumOfArray(vector<int>& arr,int index){
    if(index == arr.size()){
        return 0 ;
    }
    return arr[index] + sumOfArray(arr, index + 1);
}


int minElement(vector<int> &arr, int index){
    if(index == arr.size()-1){
        return arr[index];
    }
    return min(arr[index], minElement(arr, index+1));
}

int maxElement(vector<int> &arr, int index){
    if(index == arr.size()-1){
        return arr[index];
    }
    return max(arr[index], maxElement(arr, index+1));
}

int main(){
    vector<int> arr = {17,22,38,49,5};
    cout<<"Sum of Array : "<<sumOfArray(arr, 0)<<endl;
    cout<<"Minimum Element in Array : "<<minElement(arr, 0)<<endl;
    cout<<"Maximum Element in Array : "<<maxElement(arr, 0)<<endl;
    return 0;
}