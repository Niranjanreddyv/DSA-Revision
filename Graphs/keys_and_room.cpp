#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> st;
        queue<int> qu;
        qu.push(0);
        st.insert(0);
        while(!qu.empty()){
            int cur = qu.front();
            qu.pop();
            for(int neg : rooms[cur]){
                if(st.count(neg) == 0){
                    qu.push(neg);
                    st.insert(neg);
                }
            }
        }
        return (st.size() == rooms.size()) ? true : false;
        
    }
};


int main(){
    return 0;
}