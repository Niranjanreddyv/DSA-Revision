#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        int lastDigit = n % 10;
        cout<<lastDigit<<endl;
        n /= 10;
    }
    return 0;
}
