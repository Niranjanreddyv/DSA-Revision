#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // brute-force 
    // for(int i = 1;i<=n;i++){
    //     if(n%i == 0){
    //         cout<<i<<endl;
    //     }
    // }

    // optimal - O(sqrt(n))
    for(int i = 1;i*i<=n;i++){
        if(n%i == 0){
            int firstDiv = i;
            int secondDiv = n / i;
            cout<<firstDiv<<endl;
            if(firstDiv!=secondDiv){
                cout<<secondDiv<<endl;
            }
        }
    }

    return 0;
}