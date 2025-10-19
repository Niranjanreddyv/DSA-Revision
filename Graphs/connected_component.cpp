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

unordered_set<int> visited;

void dfs(int node){
    visited.insert(node);
    for(auto neighbour : graph[node]){
        if(!visited.count(neighbour)){
            dfs(neighbour);
        }
    }
}


int connected_components(){
    int result = 0;

    for(int i = 0;i<v;i++){

        //O(v)
        // go to every vertex
        // if from a vertex we can initialse a dfs, we got one more cc

        if(visited.count(i) == 0){ // total O(v + E)
            result++;
            dfs(i);
        }
    }
    return result;
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

    cout<<connected_components()<<endl;
    return 0;
}