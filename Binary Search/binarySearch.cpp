#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>& array, int target){
    int start = 0, end = array.size() - 1;

    while(start<=end){
        int mid = start + (end - start)  / 2;
        
        if(array[mid] == target){
            return mid;
        }
        else if(array[mid]<target){
            start = mid + 1;

        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    
    vector<int> array = {12,34,55,78,99,204};

    int target = 204;

    cout<<BinarySearch(array, target);


}