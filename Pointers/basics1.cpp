#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    cout<<&a<<endl;
    int *ptr = &a;
    cout<<ptr<<endl; // address of a
    cout<<*ptr<<endl; // value of a
    cout<<sizeof(ptr)<<endl;

    int b = 20;
    ptr = &b;
    cout<<*ptr<<endl; // * dereferencing operator

    float m = 7.8;
    float *ptr2 = &m;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;
    cout<<sizeof(ptr2)<<endl;

    return 0;
}