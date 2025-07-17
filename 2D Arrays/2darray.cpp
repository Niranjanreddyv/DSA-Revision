#include<bits/stdc++.h>
using namespace std;
void printrow(int arr[3][4], int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
    }
}

void printcol(int arr[3][4], int row,int col){
    for(int j=0;j<col;j++){
        for(int i=0;i<row;i++){
            cout<<arr[i][j]<<" ";
        }
    }
}

int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // int arr[3][4] = {
    //                     {1, 2, 3, 4},
    //                     {5, 6, 7, 8},
    //                     {9,10,11,12}
    //                 };

    printrow(arr,3,4);
    printcol(arr,3,4);
    return 0;
}