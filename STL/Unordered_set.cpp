#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> st;

    // O(1)
    st.insert(10);
    st.insert(5);
    st.insert(130);
    st.insert(54);
    st.insert(101);
    st.insert(25);
    st.insert(23);
    st.insert(55);

    // delete
    st.erase(23);

    // find

    if(st.find(243) != st.end()){
        cout<<"Present\n";
    }else{
        cout<<"Absent\n";
    }

    // count

    if(st.count(23)){
        cout<<"Present\n";
    }else{
        cout<<"Absent\n";
    }

    cout<<st.count(23)<<endl;

    // traversal

    for(auto it : st){
        cout<<it<<endl;
    }

    // for(auto it = st.begin(); it!=st.end(); it++){
    //     cout<<*it<<endl;
    // }
}