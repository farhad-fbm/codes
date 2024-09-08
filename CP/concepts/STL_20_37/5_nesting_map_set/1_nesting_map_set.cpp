#include <bits/stdc++.h>
using namespace std;


/**
 * as map key,
 * can use,
 * comparable container
 */
int main(){
    // map<set<int>,int> ms;
    // map<pair<int,int>,int> mp;

    map<pair<string, string>, vector<int>> m;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        string fn, ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j=0; j<ct; j++){
            int x; cin>>x;
            m[{fn, ln}].push_back(x);
        }
    }
    for(auto& pr:m){
        auto& full_name =pr.first;
        auto& list =pr.second;
        cout<<full_name.first<<" "<<full_name.second<<" "<<list[0]<<endl;
    }
    return 0;
}