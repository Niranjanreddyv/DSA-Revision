#include<bits/stdc++.h>
using namespace std;

int mx = 31;

vector<bool> isPrime(mx);

void sieve(int n){

    for(int i = 0;i<mx;i++){
        isPrime[i] = 1;
    }

    isPrime[0] = isPrime[1] = 0;

    for(int i = 2;i*i<=n;i++){
        if(isPrime[i]){
            // we need to marj its multiples with 0 (i*i...... n);
            for(int j = i*i; j<=n; j+=i){
                isPrime[j] = 0;
            }
        }
    }

}

int main(){

    int n;
    cin>>n;

    sieve(n); // it creates isPrime array for us

    for(int i = 0;i<=n;i++){
        if(isPrime[i]){
            cout<<i<<endl;
        }
    }

    return 0;
}