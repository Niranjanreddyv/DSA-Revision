#include<bits/stdc++.h>
using namespace std;

// Node
class Node{
    public:
    int val;
    Node* right;
    Node* left;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;

    }
};

int main(){
    queue<Node*> qu;
    int x;
    cout<<"Enter the root node : ";
    cin>>x;
    Node* root = new Node(x);
    qu.push(root);
    while(!qu.empty()){
        Node* temp = qu.front();
        // first 
        int f;
        cout<<"Enter the left child of "<<temp->val<<" : ";
        cin>>f;
        if(f!=-1){
            temp->left = new Node(f);
            qu.push(temp->left);
        }
        // second
        int s;
        cout<<"Enter the right child of "<<temp->val<<" : ";
        cin>>s;
        if(s!=-1){
            temp->right = new Node(s);
            qu.push(temp->right);
        }
        qu.pop();

    }
    return 0;
}