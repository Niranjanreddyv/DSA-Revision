#include<bits/stdc++.h>
using namespace std;
int NthStair(int n){
    if(n == 1 || n == 2){
        return n;
    }
    return NthStair(n - 1) + NthStair(n - 2);
}
int main(){

    int n;
    cin>>n;
    cout<<NthStair(n);
    return 0;
    
}