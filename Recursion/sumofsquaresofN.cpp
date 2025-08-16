#include<iostream>
using namespace std;
int sumofSquares(int n){
    if(n == 0){
        return 0;
    }
    return n*n + sumofSquares(n - 1);
}
int main(){
    int n;
    cin>>n;
    cout<<sumofSquares(n);
}