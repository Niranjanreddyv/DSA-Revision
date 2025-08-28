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
    Node* head = new Node(10);
    Node* temp = new Node(20);
    Node* temp2 = new Node(30);
    // cout<<head->val<<endl;
    head->next = temp;
    temp->next = temp2;

    // cout<<head->next<<endl;
    Node* t = head;
    while(t){
        cout<<t->val<< " ";
        t = t->next;
    } 
    return 0;

}