#include<bits/stdc++.h>
using namespace std;
string checkPalindrome(string &str, int start, int end){
    if(start>=end){
        return "It's palindrome";
    }
    if(str[start]!=str[end]){
        return "It's not a palindrome";

    }
    return checkPalindrome(str, start+1,end - 1);

}
int main(){
    string str = "naman";
    cout<<checkPalindrome(str, 0, str.size() - 1); 
}