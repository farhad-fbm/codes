#include <bits/stdc++.h>
using namespace std;
void printM(auto m){
    for(auto& pr:m) cout<<pr.first<<" "<<pr.second<<endl;
}
void printByIt(auto& m, auto& it){
    cout<<"find : ";
    if(it == m.end()) cout<<"no value"<<endl;
    else cout<<it->first<<" "<<it->second<<endl;
}

int main(){
    map<int, string> m;
    m[1]="ami"; //O(log(n));
    m[2]="tumi";
    m[3]="she";
    m.insert({ 4,"all" });


    auto it = m.find(5); //by key;if not exist return end(last+1)
    m.erase(4);   //O(log(n))
    if(it !=m.end())
        m.erase(it);     //by it



    printByIt(m, it);
    printM(m);
    return 0;
}