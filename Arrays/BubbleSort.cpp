#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break; // All elemnts are in Sorted order.
    }

}
void printArray(vector<int>& arr){
    for(int num : arr){
        cout<<num<< " ";
    }
}
int main(){
    vector<int> arr = {12,20,34,55,29,70};
    bubbleSort(arr);
    printArray(arr);
    return 0;
}