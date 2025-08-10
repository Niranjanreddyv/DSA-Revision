#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    cout<<&a<<endl;
    int *ptr = &a;
    cout<<ptr<<endl;
    float m = 7.8;
    float *ptr2 = &m;
    cout<<ptr<<endl;

    return 0;
}