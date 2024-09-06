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
    // set = map without value
    // complexity are equal----log(n)
    set<string> s;
    s.insert("abc");
    s.insert("zfs");
    s.insert("bcs");

    auto it=s.find("abc");
    print(s);
    printAt(s,it);
    return 0;
}