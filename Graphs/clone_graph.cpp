#include<bits/stdc++.h>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};


class Solution {
public:
    vector<Node*> R;

    void dfs(Node* actual, Node* clone){
        for(auto ne : actual->neighbors){
            if(!R[ne->val]){
                Node* newNode = new Node(ne->val);
                R[ne->val] = newNode;
                clone->neighbors.push_back(newNode);
                dfs(ne, newNode);
            }else{
                clone->neighbors.push_back(R[ne->val]);
            }
        }
    }

    Node* cloneGraph(Node* node) {

        if(node == NULL) return NULL;
        R.resize(110, NULL);
        Node* clone = new Node(node->val);
        R[clone->val] = clone;
        dfs(node, clone);
        return clone;

        
    }
};

int main(){

    return 0;
}