#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Stack {
    Node* topNode; // Pointer to the top of the stack

public:
    Stack() {
        topNode = NULL;
    }

    // Push element onto stack
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = topNode;
        topNode = newNode;
        cout << val << " pushed to stack.\n";
    }

    // Pop element from stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Nothing to pop.\n";
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        cout << "Popped: " << temp->data << "\n";
        delete temp;
    }

    // Get top element
    int top() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1;
        }
        return topNode->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return topNode == NULL;
    }

    // Get size of stack
    int size() {
        int count = 0;
        Node* temp = topNode;
        while (temp) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "Top element: " << st.top() << endl;
    cout << "Stack size: " << st.size() << endl;

    st.pop();
    cout << "Top after pop: " << st.top() << endl;

    cout << "Is stack empty? " << (st.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
