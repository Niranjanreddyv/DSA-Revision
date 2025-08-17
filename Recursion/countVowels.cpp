#include<bits/stdc++.h>
using namespace std;
int countVowels(string &str, int index){
    if(index == -1){
        return 0;
    }
    if(str[index] == 'a' ||str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u'){
        return 1 + countVowels(str, index-1);
    }
    else{
        return countVowels(str, index - 1);
    }
}
int main(){
    string str = "ramasita";
    cout<<countVowels(str, str.size()-1);
}