#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = this->prev = NULL;
    }
};

void insertAtHead(Node* &head, Node* &tail, int val){
    if(head == NULL){
        head = new Node(val);
        tail = head;
        return;
    }
    else{
        Node* temp = new Node(val);
        temp->next = head;
        head->prev = temp;
        head = temp;
        return;
    }
}

void insertAtTail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(!head){
        insertAtHead(head, tail, val);
    }else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int val, int pos){
    if(pos <= 0){
        cout<<"Invalid Position"<<endl;
        return;
    }
    if(pos == 1){
        insertAtHead(head, tail, val);
        return;
    }
    Node* temp = head;
    for(int i = 1; temp && i < pos - 1; i++){
        temp = temp->next;
    }
    if(!temp){
        cout<<"Position is out of range \n";
        return;
    }
    if(!temp->next){
        insertAtTail(head, tail, val);
        return;
    }
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteAtHead(Node* &head, Node* &tail){
    if(!head) return;
    Node* temp = head;
    head = head->next;
    if(head) head->prev = NULL;
    else tail = NULL; // List is empty
    delete temp;
}

void deleteAtTail(Node* &head, Node* &tail){
    if(!tail) return;
    Node* temp = tail;
    tail = tail->prev;
    if(tail) tail->next = NULL;
    else head = NULL; // List is empty
    delete temp;
}

void deleteAtPosition(Node* &head, Node* &tail, int pos){
    // cout<<"delete called";
    if(!head || pos<=0) return;
    if(pos == 1){
        deleteAtHead(head, tail);
        return;
    }
    Node* temp = head;
    for(int i = 1; temp && i < pos; i++){
        temp = temp->next;
    }
    if(!temp){
        cout<<"Position is out of range \n";
        return;
    }
    if(!temp->next){
        deleteAtTail(head, tail);
        return;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

void printForward(Node* head){
    if(head == NULL){
        // cout<<"It's an empty LinkedList";
        return;
    }else{
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
}

void printBackward(Node* tail) {
    while (tail) {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << "\n";
}

int length(Node* &head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        cnt++;
        temp = temp->next;
    }
    return cnt;

}

int main(){
    Node *head, *tail;
    head = NULL;
    tail = NULL;

    // insertAtPosition(head, tail, 0, 0);
    insertAtPosition(head, tail, 40, 1);
    insertAtTail(head, tail, 2);
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtTail(head, tail, 5);
    insertAtPosition(head, tail, 3, 3);
    insertAtPosition(head, tail, 13, 8);
    // insertAtPosition(head, tail, 13, 10);
    deleteAtHead(head, tail);
    deleteAtTail(head, tail);
    deleteAtPosition(head, tail, 2);


    printForward(head);

    cout<<endl;
    printBackward(tail);
    cout<<length(head);

    return 0;
}