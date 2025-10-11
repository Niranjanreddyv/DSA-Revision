#include<bits/stdc++.h>
using namespace std;

// increasing order
bool cmpinc(int x, int y){
    return x < y;
}

// decreasing order
bool cmpdec(int x, int y){
    return x > y;
}

// custom cmp 

bool cmp(pair<int, int> p1, pair<int, int> p2){
    double r1 = (p1.first*1.0)/(p1.second*1.0);
    double r2 = (p2.first*1.0)/(p2.second*1.0);
    return r1 > r2;
}

double fractinalknapsack(vector<int> &value, vector<int> &weight, int n, double w){

    // Time : O(nlogn)
    // space : O(sorting algo)

    vector<pair<int, int>> arr;

    for(int i = 0;i<value.size();i++){
        arr.push_back({value[i], weight[i]});
    }

    sort(arr.begin(), arr.end(), cmp);

    double profit = 0;

    for(int i = 0;i<n;i++){

        if(arr[i].second <= w){

            profit += arr[i].first;
            w -= arr[i].second;

        }else{

            profit += ((arr[i].first * 1.0) / (arr[i].second * 1.0)) * w;
            w = 0;
            break;
        }
    }

    return profit;

}

int main(){

    vector<int> value = {60, 100, 120};
    vector<int> weight = {10,20,30};

    double w = 50;
    int n = 3;

    cout<<fractinalknapsack(value, weight, n, w);



    


    return 0;

}