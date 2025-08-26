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

void insertAtHead(Node* &head, int val){
    if(head == NULL){
        head = new Node(val);
        return;
    }else{
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        return;
    }
}

void insertAtPosition(Node* &head,int val, int pos){
    if(pos<=0){
        cout<<"Invalid position"<<endl;
        return;
    }
    if(pos == 1){
        insertAtHead(head, val);
        return;
    }

    Node* temp = head;
    for(int i = 1;temp && i<pos-1;i++){
        temp = temp->next;
    }
    if(!temp){
        cout<<"position out of array"<<endl;
    }
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}

int main(){
    Node* head;
    head = NULL;
    int n = 5;
    while(n--){
        int a;
        cin>>a;
        insertAtHead(head, a);
    }

    insertAtPosition(head, 30, 4);

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