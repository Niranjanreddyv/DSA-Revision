#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp = n;

    // 
    for(int i = 2;i<=n;i++){
        while(temp%i == 0){
            cout<<i<<" ";
            temp /= i;
        }
    }
}