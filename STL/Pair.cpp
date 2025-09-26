#include<bits/stdc++.h>
using namespace std;
int main(){

    pair<string, int> p;
    p.first = "ram";
    p.second = 20;

    cout<<p.first<<" "<<p.second<<endl;

    pair<string , int> q;
    q = make_pair("raju", 19);
    cout<<q.first<<" "<<q.second<<endl;

    pair<string, pair<int, int>> s;
    s.first = "lion";
    s.second.first = 10;
    s.second.second = 20;
    cout<<s.first<<" "<<s.second.first<<" "<<s.second.second<<endl;
    
}