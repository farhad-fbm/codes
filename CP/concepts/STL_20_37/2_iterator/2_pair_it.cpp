#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int, int>> vp ={ {1,2},{3,4},{4,5} };
    vector<pair<int, int>> ::iterator it2;

    for(it2=vp.begin(); it2<vp.end(); it2++){
        cout<< (*it2).first<<" "<<(*it2).second<<endl;
        cout<< (it2)->first<<" "<<(it2)->second<<endl;  
    }
    return 0;
}


/**
  (*it).first == it->first
 */