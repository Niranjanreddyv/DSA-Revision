#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> st;

    // set<int, greater<int> > st; // decreasing order 
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

    // for(auto it = st.begin(); it!=st.end(); it++){
    //     cout<<*it<<endl;
    // }
}