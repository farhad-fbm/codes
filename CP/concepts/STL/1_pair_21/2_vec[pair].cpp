#include <bits/stdc++.h>
using namespace std;




void printVector(vector<pair<int, int>>& vp){
    for(int i=0; i<vp.size(); i++){
        cout<<vp[i].first<<" "<<vp[i].second;
        cout<<endl;
    }
}
int main(){
    vector<pair<int, int>> vp; //each vp vector have a Pair(int,int)
    int n; cin>>n;
    for(int i=0; i<n; i++){
       int x,y; cin>>x>>y;
        vp.push_back({x,y});
    }
    printVector(vp);
    return 0;
}