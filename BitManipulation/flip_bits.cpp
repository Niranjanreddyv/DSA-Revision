#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 23;
    int temp;
    int p = n;
    while(p>0){
        temp = p;

        p = p & p - 1;

    }
    temp = temp << 1;
    temp = temp - 1;
    cout<<(n^temp);

}