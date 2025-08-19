#include<iostream>
#include<vector>
#include<string>
using namespace std;
void subset(string &s, int index, int size, vector<string> &ans, string temp){
    if(index == size){
        ans.push_back(temp);
        return;
    }
    // Not include
    subset(s, index + 1, size, ans, temp);
    // include
    temp.push_back(s[index]);
    subset(s, index+1, size, ans, temp);
    temp.pop_back(); // vector space optimization
}
int main(){
    string s = "abc";
    vector<string> ans;
    string temp;
    subset(s, 0, s.size(), ans, temp);
    for(int i=0;i<ans.size();i++){
        for(int j = 0;j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
    return 0;

}