#include<bits/stdc++.h>
using namespace std;
void fun(int num,int n){
    if(n == num){
        cout<<num;
        return;
    }
    cout<<num<<" ";
    fun(num + 1 , n);
}

void gun(int n){
    if(n<=0){
        return;
    }
    gun(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    // fun(1,n);
    gun(n);
    return 0;
}