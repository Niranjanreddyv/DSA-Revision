#include<bits/stdc++.h>
using namespace std;
void lowerToUppercase(string &str, int index){
    if(index == -1){
        return;
    }
    str[index] = 'A' + str[index] - 'a';
    lowerToUppercase(str, index-1);
}
int main(){
    string str = "rohit";
    lowerToUppercase(str, str.size()-1);
    cout<<str<<endl;
    return 0;
}