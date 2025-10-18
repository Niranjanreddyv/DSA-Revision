#include<bits/stdc++.h>
using namespace std;

vector< list<int> > graph;
unordered_set<int> visited;
int v;

void add_edges(int s, int d, bool bi_dir = true){
    graph[s].push_back(d);
    if(bi_dir){
        graph[d].push_back(s);
    }
}

bool dfs(int cur, int end){

    if(cur == end) return true;
    visited.insert(cur);
    for(auto neighbour : graph[cur]){
        if(!visited.count(neighbour)){
            bool result = dfs(neighbour, end);
            if(result) return true;
        }
    }

    return false;
}


bool anyPath(int src, int des){
    return dfs(src, des);
}



int main(){

    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;

    while(e--){
        int s,d;
        cin>>s>>d;
        add_edges(s, d);
    }

    int x, y;
    cin>>x>>y;

    cout<<anyPath(x, y)<<endl;


    return 0;

}