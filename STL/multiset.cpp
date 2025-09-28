#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> st; // Duplicates also allowed here
    st.insert(20);
    st.insert(10);
    st.insert(20);
    st.insert(10);
    st.insert(20);
    st.insert(10);
    st.insert(20);
    st.insert(10);

    cout<<st.count(20)<<endl;

    for(auto it : st){
        cout<<it<<endl;
    }

    return 0;
}