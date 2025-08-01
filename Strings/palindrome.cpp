#include<bits\stdc++.h>
using namespace std;
int main(){

    string s = "naman";
    int start = 0, end = s.size()-1;
    while(start<=end){
        if(s[start] != s[end]){
            cout<<"it\'s not a palindorome."<<endl;
            return 0;
        }
        start++,end--;
    }
    cout<<"it\'s a palindrome.";
    return 0;
}