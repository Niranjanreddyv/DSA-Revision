#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insert(Node* root, int target){
    if(!root){
        Node* temp = new Node(target);
        return temp;
    }
    if(target < root->val){
        root->left = insert(root->left, target);
    }else{
        root->right = insert(root->right, target);
    }
    return root;
}

bool search(Node* root, int target){
    if(!root){
        return 0;
    }
    if(root->val == target){
        return 1;
    }
    if(root->val < target){
        return search(root->right,  target);
    }else{
        return search(root->left, target);
    }
}

void inorder(Node* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main(){

    vector<int> arr = {3,7,4,1,6,8};

    Node* root = NULL;

    for(int i = 0;i<arr.size();i++){
        root = insert(root, arr[i]);
    }

    inorder(root);
    cout<<search(root, 8);


}