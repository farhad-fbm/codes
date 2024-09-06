#include <bits/stdc++.h>
using namespace std;

int main(){

    auto a='a';   //auto detect DataType
    // func(auto a){}  can be use
    cout<<typeid(a).name() <<endl;


    vector<int> v={ 1,2,3,4,5 };
    vector<pair<int, int>> vp ={ {1,2},{3,4},{4,5} };

    for(auto it=v.begin(); it<v.end(); it++) cout<<*it<<" ";
    cout<<"\n";
    for(auto& val : v) cout<<val<<" ";

    cout<<"\n";
    for(auto it=vp.begin(); it<vp.end(); it++) cout<<it->first<<" "<<it->second<<endl;
    for(auto& val : vp)
        cout<<val.first<<" "<<val.second<<endl;

    return 0;
}