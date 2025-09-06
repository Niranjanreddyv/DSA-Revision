#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {4,13,11,5,9,7,8,6};
    vector<int> ans(arr.size(), -1);
    stack<int> st;
    // from start
    for(int i=0; i<arr.size();i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i] = arr[st.top()];
        }
        st.push(i);
    }

    // // from last 
    // for(int i = arr.size()-1;i>=0; i--){
    //     while(!st.empty() && arr[st.top()] > arr[i]){
    //         ans[st.top()] = arr[i];
    //         st.pop();
    //     }
    //     st.push(i);
    // }

    cout<<"prev smaller Element of array : ";
    for(int &i : ans){
        cout<<i<<" ";
    }

    return 0;

}