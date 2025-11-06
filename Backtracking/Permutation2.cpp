#include<bits/stdc++.h>
using namespace std;
// repeated char
void f(string &str, int i){
    if(i == str.size() - 1){
        cout<<str<<"\n";
        return;
    }
    unordered_set<char> s;
    for(int idx = i;idx<str.size();idx++){
        if(s.count(str[idx])) continue;
        s.insert(str[idx]);
        swap(str[idx], str[i]);
        f(str, i+1);
        swap(str[idx], str[i]);
    }

}

int main(){

    string str = "aba";
    f(str, 0);
    return 0;


}