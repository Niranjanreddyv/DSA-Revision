#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    Node* head;
    head = NULL;
    int n = 5;
    while(n--){
        int a;
        cin>>a;
        if(head == NULL){
            head = new Node(a);
        }else{
            Node* temp = new Node(a);
            temp->next = head;
            head = temp;
        }
    }

    // print 
    Node* temp = head;
    while(temp){
        cout<<temp->val<<" ";
        // cout<<temp->next<<" "; // address of next Node
        // cout<<temp<<" "; // address of same nodes
        temp = temp->next;
    }

    return 0;
}