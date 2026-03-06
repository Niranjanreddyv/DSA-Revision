#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 24;
    int temp;
    while(n!=0){
        temp = n;
        n = n & n -1;
    }
    cout<<temp<<endl;
    // next maximum power 
    cout<<temp*2<<endl;
    return 0;
}