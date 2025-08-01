#include<bits\stdc++.h>
using namespace std;
int main(){
    string s = "rama";
    // in-built function 
    reverse(s.begin(),s.end());

    // two pointers 
    int start = 0, end = s.size()-1;
    while(start < end){
        swap(s[start], s[end]);
        start++,end--;
    }

    cout<<s<<endl;

    // size 
    int size = 0;
    while(s[size]!='\0'){
        size++;
    }
    cout<<size<<endl;

}