#include <bits/stdc++.h>
using namespace std;
// void printM(map<int, string> m){
void printM(auto m){
    for(auto& pr:m)
        cout<<pr.first<<" "<<pr.second<<endl;  //sorted order
    cout<<"keys are sorted & unique"<<endl;
}
int main(){
    map<int, string> m;
    m[1]="ami"; //O(log(n));
    m[2]="tumi";
    m[3]="she";
    m[2]="you"; //***
    m.insert({ 4,"all" });

    // 


    printM(m);
    return 0;
}