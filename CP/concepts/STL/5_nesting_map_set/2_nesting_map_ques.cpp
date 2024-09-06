#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, multiset<string>> m;
    int n; cin>>n;
    while(n--){
        string name;
        int num;
        cin>>name>>num;
        m[num].insert(name);
    }
    auto it=--m.end();
    while(true){
        auto& students = (*it).second;
        auto& marks = (*it).first;
        for(auto student : students){
            cout<<student<<" "<<marks<<endl;
        }
        if(it==m.begin()) break;
        it--;
    }
    return 0;
} 