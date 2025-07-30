#include<bits\stdc++.h>
using namespace std;

void Transpose(int arr[3][3], int row, int col){
    int a[row][col];
    cout<<"Before Transpose the matrix : "<<endl;
    for(int i = 0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            a[j][i] = arr[i][j];
        }
    }

    cout<<"After Transpose the matrix : "<<endl;

    for(int i = 0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}

void TransposeOptimized(int arr[3][3],int row, int col){
    cout<<"Before Transpose the matrix : "<<endl;
    for(int i = 0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0;i<row;i++){
        for(int j=i+1;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }


    cout<<"After Transpose the matrix : "<<endl;

    for(int i = 0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int row = 3;
    int col = 3;
    // Transpose(arr, row,col);
    TransposeOptimized(arr,row,col);
}