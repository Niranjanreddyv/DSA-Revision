#include<bits/stdc++.h>
using namespace std;

void f(string &str, int i){
    if(i == str.size() - 1){
        cout<<str<<"\n";
        return;
    }

    for(int idx = i;idx<str.size();idx++){
        swap(str[idx], str[i]);
        f(str, i+1);
        swap(str[idx], str[i]);
    }

}

int main(){

    string str = "abc";
    f(str, 0);
    return 0;


}