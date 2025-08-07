#include<bits/stdc++.h>
using namespace std;
int getLPSLength(string &s) {
        // code here
        int prefix = 0, suffix = 1;
        
        vector<int> lps(s.size(),0);
        
        while(suffix < s.size()){
            // match
            if(s[prefix] == s[suffix]){
                lps[suffix] = prefix + 1;
                prefix++,suffix++;
            }
            else{
                 // not match
                if(prefix == 0){
                    lps[suffix]=0;
                    suffix++;
                }
                else{
                    prefix = lps[prefix - 1];
                }
            }
        }
        return lps[s.size()-1];
        
    }
int main(){
    string s;
    cin>>s;
    cout<<getLPSLength(s)<<endl;

    return 0;
}