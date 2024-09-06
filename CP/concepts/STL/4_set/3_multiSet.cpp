#include <bits/stdc++.h>
using namespace std;

void print(auto& s){
    for(auto val : s) cout<<val<<endl;
    cout<<endl;
}
void printAt(auto& s, auto& it){
    if(it != s.end()) cout<<(*it)<<endl;
}
int main(){
    // multiSet = multiple allow
    // complexity equal to set-----log(n)
    multiset<string> s;
    s.insert("abc");
    s.insert("zfs");
    s.insert("bcs");
    s.insert("abc");
    s.insert("bcs");


    print(s);
    auto it=s.find("abc"); //return first it
    if(it != s.end())
        s.erase(it);  //delete one

    s.erase("bcs"); //all
    print(s);
  
    return 0;
}