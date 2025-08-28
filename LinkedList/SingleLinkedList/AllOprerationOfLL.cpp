#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int val) {
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
}

void insertAtPosition(Node* &head, int val, int pos) {
    if (pos <= 0) {
        cout << "Invalid position" << endl;
        return;
    }

    if (pos == 1) {
        insertAtHead(head, val);
        return;
    }

    Node* temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position out of range" << endl;
        return;
    }

    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

//////////////////////////
// Deletion Operations  //
//////////////////////////

// 1. Delete at Head
void deleteAtHead(Node* &head) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

// 2. Delete at Tail
void deleteAtTail(Node* &head) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

// 3. Delete at Position
void deleteAtPosition(Node* &head, int pos) {
    if (pos <= 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    if (pos == 1) {
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        cout << "Position out of range!" << endl;
        return;
    }
    Node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
}

// 4. Delete by Value (first occurrence)
void deleteByValue(Node* &head, int value) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    if (head->val == value) {
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    while (temp->next != NULL && temp->next->val != value) {
        temp = temp->next;
    }
    if (temp->next == NULL) {
        cout << "Value not found!" << endl;
        return;
    }
    Node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
}

// 5. Delete Entire List
void deleteEntireList(Node* &head) {
    Node* temp = head;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
    cout << "List deleted!" << endl;
}

////////////////////
// Main Function  //
////////////////////
int main() {
    Node* head = NULL;

    // Insert some values
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtPosition(head, 40, 2);
    insertAtPosition(head, 50, 5);

    cout << "Initial List: ";
    printList(head);

    deleteAtHead(head);
    cout << "After deleting head: ";
    printList(head);

    deleteAtTail(head);
    cout << "After deleting tail: ";
    printList(head);

    deleteAtPosition(head, 2);
    cout << "After deleting position 2: ";
    printList(head);

    deleteByValue(head, 10);
    cout << "After deleting value 10: ";
    printList(head);

    deleteEntireList(head);
    cout << "After deleting entire list: ";
    printList(head);

    return 0;
}
