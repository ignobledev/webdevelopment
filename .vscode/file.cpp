
#include<iostream>
#include<string>
using namespace std;
string reverseString(string& s){
    string res;
    for(int i =s.size()-1; i>=0; i-- ){
        res+=s[i];
    }
    return res;
}
int main(){
    string s = "abcdfe";
    string res = reverseString(s);
    cout<<res;
    s.push_back('3');
    cout<<s;
    s.pop_back();
    s.insert(5,"c++");
    cout<<"After insert: "<<s<<endl;
    s.erase(5,4);
    cout<<s;
}
