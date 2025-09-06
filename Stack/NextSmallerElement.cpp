#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {7,9,12,10,14,8,3,6,9};
    vector<int> ans(arr.size(), -1);
    stack<int> st;
    // from start
    // for(int i=0;i<arr.size();i++){
    //     while(!st.empty() && arr[st.top()]>arr[i]){
    //         ans[st.top()] = arr[i];
    //         st.pop();
    //     }
    //     st.push(i);
    // }

    // from last 
    for(int i = arr.size()-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i] = arr[st.top()];
        }
        st.push(i);
    }

    cout<<"Next smaller Element of array : ";
    for(int &i : ans){
        cout<<i<<" ";
    }

    return 0;

}