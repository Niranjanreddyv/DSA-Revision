#include<bits/stdc++.h> 
using namespace std;
class Stack{
    public:
    vector<int> arr;
    Stack(){};
    void push(int val){
        arr.push_back(val);
        return;
    }
    void pop(){
        arr.pop_back();
        return;
    }
    bool isEmpty(){
        if(arr.size() == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
    int top(){
        if(isEmpty()){
            return -1;
        }
        return arr[arr.size()-1];
    }
    int size(){
        return arr.size();
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.isEmpty()<<endl;
    cout<<st.size();

    return 0;
}