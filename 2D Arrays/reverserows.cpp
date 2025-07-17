#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int row = 3, col = 3;

    for(int i=0;i<row;i++){
        int s = 0, e = col - 1;
        while(s<=e){
            swap(arr[i][s], arr[i][e]);
            s++, e--;
        }

    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
    }

}