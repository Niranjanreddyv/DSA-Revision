#include<bits/stdc++.h>
using namespace std;

vector< list<int> > graph;
int v;
unordered_set<int> visited;

void add_edges(int s, int d, int bi_dir = true){
    graph[s].push_back(d);
    if(bi_dir){
        graph[d].push_back(s);
    }
}

void bfs(int src, vector<int> &dist){
    queue<int> qu;
    visited.clear();
    dist.resize(v, INT_MAX);
    qu.push(src);
    visited.insert(src);
    dist[src] = 0;

    while(!qu.empty()){
        int cur = qu.front();
        qu.pop();
        for(auto neighbour : graph[cur]){
            if(!visited.count(neighbour)){
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[cur] + 1;
            }
        }

    }
    return;
}





int main(){
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--){
        // cout<<e<<"->";
        int s,d;
        cin>>s>>d;
        add_edges(s, d);
    }
    int x;
    cin>>x;
    vector<int> dist;
    
    bfs(x, dist);

    for(auto ele : dist){
        cout<<ele<<" ";
    }

    return 0;
}
