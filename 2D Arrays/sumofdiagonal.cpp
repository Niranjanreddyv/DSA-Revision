#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int first = 0, second = 0;
    int i = 0;

    while(i<3){
        first += arr[i][i];
        i++;
    }
    i = 0; 
    int j = 3 - 1; // col - 1;

    while(j>=0){
        second += arr[i][j];
        i++, j--;
    }

    cout<<first<<"   "<<second<<endl;
    cout<<first+second;




    // int sum = 0;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         if(i==j || (i+j == 3)) sum += arr[i][j];
    //     }
    // }
    // cout<<sum;
    return 0;
}