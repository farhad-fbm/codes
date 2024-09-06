#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec={ 1,2,3,4,5 };
    // for(int val : vec) cout<<val<<" "; //"val" copy
    for(int& val : vec) cout<<val<<" ";  //"val" ref

    cout<<"\n";
    
    vector<pair<int, int>> vp ={ {1,2},{3,4},{4,5} };
    for(pair<int, int> v_p : vp)
        cout<<v_p.first<<" "<<v_p.second<<endl;



    return 0;
}