#include<bits/stdc++.h>
using namespace std;

vector< list<int> > graph;
int v;

void add_edges(int s, int d, bool bi_dir = true){
    graph[s].push_back(d);
    if(bi_dir){
        graph[d].push_back(s);
    }
}

void display(){
    for(int i = 0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto el : graph[i]){
            cout<<el<<" , ";
        }
        cout<<endl;
    }
}

int main(){

    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;

    while(e--){
        int s, d;
        cin>>s>>d;
        add_edges(s, d);
    }

    display();

    return 0;

}