#include<bits\stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s;

    // niranjan reddy  -> output niranjan 
    string d;
    getline(cin, d);
    cout<<d<<endl;
    cout<<d.size();

    string s1 = "ram" ,s2 = "raju";
    string s3 = s1 + s2;
    cout<<s3<<endl;
    string s4 = s1.append(s2);
    cout<<s4<<endl;
    s1.push_back('a');
    s1 = s1 + "a";
    cout<<s1<<endl;
    s1.pop_back();
    cout<<s1<<endl;


    string s5 = "i am a \"good\" boy";
    cout<<s5<<endl;
    string s6 = "\\0";
    cout<<s6<<endl;
   
    return 0;
}