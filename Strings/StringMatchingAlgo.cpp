#include<bits/stdc++.h>
using namespace std;

int bruteForce(string s1, string s2, int n1, int n2){
    int second, first;

    for(int i = 0; i <= n1-n2; i++){
        first = i, second = 0;
        while(second < n2){
            if(s1[first] != s2[second]){
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

// Optimized way

void findlps(vector<int>& lps, string &s2){
    int first = 0, second = 1;
    while(second < s2.size()){
        if(s2[first]==s2[second]){
            lps[second] = first + 1;
            first++,second++;

        }
        else{
            if(first == 0){
                lps[second] = 0;
                second++;
            }else{
                first = lps[first-1];
            }
        }
    }
}

int optimizedCode(string haystack, string needle) {
        int n1 = haystack.size(), n2 = needle.size();
        vector<int> lps(n2, 0);
        findlps(lps, needle);
        int first = 0, second = 0;
        while(second < n2 && first < n1){
            if(haystack[first] == needle[second]){
                first++, second++;
            }else{
                if(second == 0){
                    first++;
                }
                else{
                    second = lps[second - 1];
                }
            }
        }

        if(second == n2){
            return first - second;
        }
        return -1;

        
    }

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n1 = s1.size(), n2 = s2.size();
    int ans = bruteForce(s1,s2,n1,n2);
    int opt = optimizedCode(s1,s2);
    cout<<"string matching from index "<<opt;

    return 0;
}