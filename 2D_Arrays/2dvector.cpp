#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Entet the rows and columns : ";
    cin>>n>>m;
    vector <vector<int> > matrix(n, vector<int>(m, 1));

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}