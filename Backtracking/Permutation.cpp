#include<bits/stdc++.h>
using namespace std;

void f(string str, string ans){
    if(str.size() == 0){
        cout<<ans<<"\n";
        return;
    }

    for(int i = 0;i<str.size();i++){
        char ch = str[i];
        string l = str.substr(0, i);
        string r = str.substr(i+1);
        string ros = l + r;
        f(ros, ans + ch);
    }
}

int main(){
    f("abc", "");
    return 0;
}