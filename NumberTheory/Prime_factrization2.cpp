#include<bits/stdc++.h>
using namespace std;

const int mx = 100;
vector<int> lpf(mx, 0);

void seive(int n){

    for(int i = 2;i*i<=n;i++){

        if(lpf[i] == 0){
            // it means i is prime
            // we need to marks its multiples with i ;
            lpf[i] = i;
            for(int j = i*i; j<=n;j+=i){
                if(lpf[j] == 0)
                    lpf[j] = i;
            }
        }

    }
}

int main(){

    int n = 36;
    seive(n);

    int temp = n;

    while(temp > 1){
        cout<<lpf[temp]<<" ";
        temp /= lpf[temp];
    }
}