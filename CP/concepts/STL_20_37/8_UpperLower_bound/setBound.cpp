#include <bits/stdc++.h>
using namespace std;



int main(){
    set<int> s ={ 4,2,6,2,8 };
    int setVal;
    for(auto i=s.begin(); i!=s.end(); i++){
        auto it=s.lower_bound(3);
        setVal = *it;
    }
    cout<<setVal<<endl;


    map<int, int> mp = { {1,4},{2,6},{4,7} };
    pair<int, int> mapVal;
    for(auto i=mp.begin(); i!=mp.end(); i++){
        auto it=mp.lower_bound(2);
        mapVal = {it->first,it->second};
    }
    cout<<mapVal.first<<" "<<mapVal.second <<endl;
    return 0;
}