#include<bits/stdc++.h>
using namespace std;
// time : O(n * long(n))
class MaxHeap{
    vector<int> hp;

    void upheapify(int ci){
        while(ci > 0){
            int pi = (ci - 1) / 2;
            if(hp[pi] < hp[ci]){
                swap(hp[pi], hp[ci]);
                ci = pi;
            }else{
                break;
            }
        }
    }

    void downheapify(int idx){

        while(idx < hp.size()){
            int lc = 2*idx + 1;
            int rc = 2*idx + 2;

            if(lc >= hp.size()){
                return;
            }
            int maxEle = idx;

            if(hp[lc] > hp[maxEle]){
                maxEle = lc;
            }
            if(rc < hp.size() && hp[rc] > hp[maxEle]){
                maxEle = rc;
            }
            if(maxEle!=idx){
                swap(hp[idx], hp[maxEle]);
                idx = maxEle; // next iteration
            }else{
                break;
            }
        } 
    }

    public:

    MaxHeap(vector<int> v){

        hp = v;

        for(int i = 1; i<hp.size();i++){
            upheapify(i);
        }

    }

    void push(int element){

        hp.push_back(element);
        upheapify(hp.size() - 1);

    }

    void pop(){

        if(empty()) return;

        swap(hp[0], hp[hp.size() - 1]);
        hp.pop_back();
        if(!empty())
            downheapify(0);

        
    }

    bool empty(){
        return hp.size() == 0;
    }

    int peek(){
        if(empty()){
            return INT_MIN;
        }
        return hp[0];

    }

    void display(){
        cout<<"[";
        for(int i = 0;i<hp.size();i++){
            cout<<hp[i];
            if (i != hp.size() - 1) cout << ",";
        }
        cout<<"]\n";
    }

};
int main(){

    vector<int> v = {9,6,1,19,3,2,8,12,5};

    MaxHeap hp(v);

    hp.display();
    hp.push(100);
    hp.display();

    

    
}