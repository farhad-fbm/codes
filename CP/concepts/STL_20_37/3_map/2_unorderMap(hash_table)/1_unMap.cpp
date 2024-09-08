#include <bits/stdc++.h>
using namespace std;
void printM(auto m){
    for(auto& pr:m)
        cout<<pr.first<<" "<<pr.second<<endl;  //sorted order
    cout<<"unOrderd map"<<endl;
    cout<<"keys are Notsorted but unique"<<endl;
}
int main(){
    // 1. inbuilt implementation (hash-Table)
    // 2. time complexity === O(1)
    // 3. valid keys datatype (normally int,string) whcih hash inbuilt finction exist


    unordered_map<int, string> m;
    m[1]="ami"; //O(1);
    m[2]="tumi";
    m[3]="she";
    m[2]="you"; //***
    m.insert({ 4,"all" });


    auto it = m.find(6);  //O(1)
    if(it !=m.end())
        m.erase(it);     //O(1)



    printM(m);
    return 0;
}