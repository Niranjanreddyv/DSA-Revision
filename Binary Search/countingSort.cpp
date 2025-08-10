#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr = {1,6,7,8,34,5};

    int maxele  =  *max_element(arr.begin(),arr.end());

    vector<int> countarr;
    countarr[0] = arr[0];
    for(int i=1;i<arr.size();i++){
        countarr[i] += countarr[i-1];
    }

    vector<int> countfreq(maxele + 1);

    for(int i=0;i<arr.size();i++){
        countfreq[arr[i]]++;

    }
    vector<int> out;

    for(int i = arr.size()-1;i>=0;i--){
        out[] = 
    }


}