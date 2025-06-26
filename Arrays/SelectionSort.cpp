#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        int minidx = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx = j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
}

void printValues(vector<int>& arr){
    for(int i : arr){
        cout<<i<<" ";
    }
}
int main(){
    vector<int> arr = {12,6,79,86,35};
    selectionSort(arr);
    printValues(arr);
}