#include<bits/stdc++.h>
using namespace std;

int bruteForce(string s1, string s2, int n1, int n2){
    int second, first;

    for(int i = 0; i <= n1-n2; i++){
        first = i,second = 0;
        while(second < n2){
            if(s1[first] == s2[second]){
                break;
            }
            else{
                first++, second++;
            }
        }
        if(second == n2){
            return n1 - n2;

        }
    }
    return -1; 


}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n1 = s1.size(), n2 = s2.size();
    int ans = bruteForce(s1,s2,n1,n2);
    cout<<"string matching from index "<<ans;

    return 0;
}