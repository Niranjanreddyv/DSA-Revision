#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int brr[3][4] = {13,24,43,64,35,76,27,78,89,12,41,17};

    int ans[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            ans[i][j] = arr[i][j] + brr[i][j]; 
        }

    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<ans[i][j]<<" ";
        }
    }
}