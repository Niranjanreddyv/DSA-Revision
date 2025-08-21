#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int> &arr, vector<vector<int>> &ans, vector<bool> &visited, vector<int> & temp){

    if(arr.size() == temp.size()){
        ans.push_back(temp);
        return;
    }
    for(int i = 0;i<arr.size();i++){
        if(visited[i]==0){
            visited[i] = 1;
            temp.push_back(arr[i]);
            permutation(arr,ans, visited, temp);
            visited[i] = 0;
            temp.pop_back();
        }

    }
}

void optimised(vector<int> &arr, vector<vector<int>> &ans, int index){
    if(index == arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i = index; i<arr.size(); i++){
        swap(arr[i],arr[index]);
        optimised(arr, ans, index+1);
        swap(arr[i], arr[index]);
    }
}

int main(){
    vector<int> arr = {1,2,3,4};
    vector<vector<int>> ans;
    // vector<bool> visited(3, 0);
    // vector<int> temp;
    // permutation(arr, ans, visited, temp);

    optimised(arr,ans, 0);

    for(int i = 0; i<ans.size();i++){
        for(int j = 0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }


}