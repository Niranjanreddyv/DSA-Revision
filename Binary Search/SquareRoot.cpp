#include<bits/stdc++.h>
using namespace std;

int Sqrt(int n){
    int start = 0, end = n, ans = -1;

    if(n<0) return ans;
    if(n==0 || n == 1) return n;

    while(start<=end){
        int mid = start + (end - start)/2;

        if(mid <= n/mid){ 
            ans = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}
int main(){

    cout<<Sqrt(65);

}