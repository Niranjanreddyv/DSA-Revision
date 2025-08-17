#include<bits/stdc++.h>
using namespace std;
void print(vector<int>& arr, int index){
    if(arr.size() == index) return;
    cout<<arr[index]<<" ";
    print(arr, index+1);
}
void reversePrint(vector<int>& arr, int index){
    if(arr.size() == index) return;
    reversePrint(arr, index+1);
    cout<<arr[index]<<" ";
    
}
void backPrint(vector<int>& arr, int index){
    if(index == -1) return;
    cout<<arr[index]<<" ";
    backPrint(arr, index - 1);    
}

void reverseBackPrint(vector<int>& arr, int index){
    if(index == -1) return;
    reverseBackPrint(arr, index - 1);
    cout<<arr[index]<<" ";    
}

int main(){
    vector<int> arr = {1,5,8,34,79,93};
    print(arr, 0);
    cout<<endl;
    reversePrint(arr, 0);
    cout<<endl;
    cout<<"Back print : ";
    backPrint(arr, arr.size()-1);
    cout<<endl;
    cout<<"back point reverse : ";
    reverseBackPrint(arr, arr.size()-1);
    return 0;
}