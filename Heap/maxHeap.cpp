#include<bits/stdc++.h>
using namespace std;

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

    MaxHeap hp;

    hp.push(200);
    hp.push(99);
    hp.push(101);
    hp.push(12);
    hp.push(11);
    hp.push(22);
    hp.push(100);
    hp.push(10);
    hp.push(9);
    hp.push(8);
    hp.push(20);

    // hp.display();

    hp.push(15);
    hp.push(205);

    hp.display();
    hp.pop();
    hp.display();
    hp.pop();
    hp.pop();
    hp.display();

    
}