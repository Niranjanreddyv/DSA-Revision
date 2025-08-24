#include<iostream>
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
    Node *head , *tail;
    tail = head = NULL;
    int n = 5;
    while(n--){
        int a;
        cin>>a;
        if(head == NULL){
            head = new Node(a);
            tail = head;
        }
        else{
            Node* temp = new Node(a);
            tail->next = temp;
            tail = temp;

        }
    }
    Node* temp = head;
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    // cout<<tail->next<<endl;
    return 0;
}