#include<bits/stdc++.h>
using namespace std;

int set_bit_count(int n){
    return __builtin_popcount(n);
}

int set_bit_count2(int n){
    int count = 0;
    while(n > 0){
        count++;
        n = (n & n-1);
    }
    return count;
}


int main(){

    cout<<set_bit_count(5)<<endl;
    cout<<set_bit_count2(5)<<endl;
    return 0;
}