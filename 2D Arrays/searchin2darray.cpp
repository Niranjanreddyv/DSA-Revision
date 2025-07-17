#include<bits/stdc++.h>
using namespace std;

string search(int arr[][4],int row,int col,int x){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] == x){
                return "Yes";
            }
        }
    }
    return "No";
}
int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    cout<<search(arr,3,4,7);

}