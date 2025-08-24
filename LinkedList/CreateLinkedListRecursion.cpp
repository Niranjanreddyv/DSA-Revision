#include<iostream>
#include<vector>
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

Node* createLinkedList(vector<int>& arr, int index){
    if(index == arr.size()){
        return NULL;
    }
    Node* temp = new Node(arr[index]);
    temp->next = createLinkedList(arr, index + 1);
    return temp;
}

int main(){
    Node* head = new Node(0);
    vector<int> arr = {1,2,3,4,5};
    head = createLinkedList(arr, 0);
    Node* temp = head;
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }

    return 0;
}