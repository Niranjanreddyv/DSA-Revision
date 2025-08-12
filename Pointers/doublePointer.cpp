#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int *p = &n;
    cout<<*p<<endl;
    int **ptr = &p;
    cout<<**ptr<<endl;
    *p = *p + 4;
    cout<<*p<< " "<< n<<endl;
    **ptr = **ptr + 10;
    cout<<**ptr<< " "<<*p<<" "<<n<<endl;
    return 0;
}