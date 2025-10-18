#include<bits/stdc++.h>
using namespace std;

vector< list<int> > graph;
unordered_set<int> visited;
vector<vector<int>> result;
int v;

void add_edges(int s, int d, bool bi_dir = true){
    graph[s].push_back(d);
    if(bi_dir){
        graph[d].push_back(s);
    }
}

void dfs(int cur, int end, vector<int>& path){

    if(cur == end){
        path.push_back(cur);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(cur);
    path.push_back(cur);
    for(auto neighbour : graph[cur]){
        if(!visited.count(neighbour)){
            dfs(neighbour, end, path);
            
        }
    }
    path.pop_back();
    visited.erase(cur);

    return;
}

void allPath(int src, int des){
    vector<int> path;
    return dfs(src, des, path);
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

    int x, y;
    cin>>x>>y;

    allPath(x, y);

    for(auto path : result){
        for(auto ele : path){
            cout<<ele<<", ";
        }
        cout<<endl;
    }


    return 0;

}