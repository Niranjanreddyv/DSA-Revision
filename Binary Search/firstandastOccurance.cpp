#include<bits/stdc++.h>
using namespace std;

vector<int> FirstAndLastOccurance(vector<int>& arr, int target){
    int start = 0, end = arr.size() - 1, first = -1,last = -1;

    while(start<=end){
        int mid = start + (end - start)/2;

        if(arr[mid]==target){
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid]<target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    start = 0;
    end = arr.size() - 1;
    while(start<=end){
        int mid = start + (end - start)/2;

        if(arr[mid]==target){
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid]<target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    return {first, last};

}

int main(){

    vector<int> arr = {1,2,3,4,5,5,5,5,5,5,6,6,6,7,7,7,8,8,8,9};

   vector<int> ans = FirstAndLastOccurance(arr, 5);

   for(int n : ans){

    cout<<n<<" ";

   }
   cout<<endl;

}