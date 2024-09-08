#include <bits/stdc++.h>
using namespace std;
void printByIt(auto&  m, auto& it){
    if(it == m.end()) cout<<"no value"<<endl;
    else cout<<it->first<<" "<<it->second<<endl;
}
int main(){
    map<int, string> m;
    m[1]="ami"; //O(log(n));
    m[2]="tumi";
    m[3]="she";
    m.insert({ 4,"all" });

    // find by key;
    auto it = m.find(6);  //O(log(n))
    //if not exist; return end(last+1)

    printByIt(m,it);
    return 0;
}