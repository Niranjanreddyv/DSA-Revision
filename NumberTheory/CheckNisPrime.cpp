#include<iostream>
using namespace std;

// time - O(sqrt(n));
bool checkPrime(int n){
    for(int i = 2;i*i<=n-1;i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;

    if(checkPrime(n)){
        cout<<n<<" is a Prime Number"<<endl;
    }else{
        cout<<n<<" is not a Prime Number"<<endl;
    }
    
}