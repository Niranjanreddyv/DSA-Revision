#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    // // address of array
    // cout<<arr<<endl;
    // cout<<arr+0<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr<<endl;
    // cout<<arr+1<<endl;

    // // value
    // cout<<arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*(arr+0)<<endl;
    // cout<<*ptr<<endl;

    // for(int i=0;i<5;i++){
    //     cout<<arr+i<<endl; // for address
    // }
    // for(int i=0;i<5;i++){
    //     cout<<*(arr+i)<<endl; // for value
    // }

    for(int i=0;i<5;i++){
        cout<<ptr[i]<<endl; // for value
    }
    for(int i=0;i<5;i++){
        cout<<ptr+i<<endl; // for address
    }
    for(int i=0;i<5;i++){
        cout<<*ptr<<endl; // for value
        ptr++;
    }

}